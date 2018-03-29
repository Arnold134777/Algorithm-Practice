//
//  main2.cpp
//  LeetCode-C++
//
//  Created by aa on 2018/3/29.
//  Copyright © 2018年 aa. All rights reserved.
//
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

void reverseStack(stack<int> &_stack){
    if(_stack.empty()){
        return;
    }
    
    int top = _stack.top();
    _stack.pop();
    reverseStack(_stack);
    _stack.push(top);
}

int main(int argc, const char * argv[]) {
    
    stack<int> stack1;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    
    reverseStack(stack1);
    
    while(!stack1.empty()){
        int top = stack1.top();
        std::cout << top << " ";
        stack1.pop();
    }
    
    return 0;
}



