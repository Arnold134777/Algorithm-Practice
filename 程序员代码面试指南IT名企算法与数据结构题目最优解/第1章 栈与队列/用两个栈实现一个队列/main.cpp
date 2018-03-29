//
//  main.cpp
//  LeetCode-C++
//
//  Created by aa on 2018/3/29.
//  Copyright © 2018年 aa. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

class Queue {
private:
    stack<int> firstStack;
    stack<int> secondStack;
public:
    void add(int num);
    int poll();
    int peek();
};

void Queue::add(int num) {
    firstStack.push(num);
}

int Queue::poll(){
    if(firstStack.empty() && secondStack.empty()){
        return -1;
    }
    
    if(secondStack.size() <= 0){
        while(firstStack.size() > 0){
            secondStack.push(firstStack.top());
            firstStack.pop();
        }
    }
   
    int top = secondStack.top();
    secondStack.pop();
    return top;
}

int Queue::peek() {
    if(firstStack.empty() && secondStack.empty()){
        return -1;
    }
    
    if(secondStack.size() <= 0){
        while(firstStack.size() > 0){
            secondStack.push(firstStack.top());
            firstStack.pop();
        }
    }
    
    int top = secondStack.top();
    return top;
}

int main(int argc, const char * argv[]) {
    
    Queue queue = Queue();
    queue.add(1);
    queue.add(2);
    queue.add(3);
    std::cout << queue.poll() << " ";
    std::cout << queue.poll() << " ";
    queue.add(4);
    std::cout << queue.poll() << " ";
    std::cout << queue.peek() << " ";
    
    return 0;
}


