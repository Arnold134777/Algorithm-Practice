function Stack(){
	this.stack = [];
	this.assistStack = [];
	this.min;	
}

Stack.prototype = {
  constructor:Stack,
  push:function(num) {
  	this.stack.push(num);
  	if(this.min === undefined || num < this.min) {
  		this.min = num;
  	}
  	this.assistStack.push(this.min);
  },
  pop:function(){
  	if(this.stack.length <= 0){
  		return -1;
  	}
  	this.assistStack.pop();
  	return this.stack.pop();
  },
  getMin:function(){
  	if(this.stack.length <= 0){
  		return -1;
  	}
  	return this.assistStack[this.assistStack.length - 1];
  }
}

// 测试
var stack = new Stack();
stack.push(2);
console.log(stack);
console.log(stack.getMin());
stack.push(3);
console.log(stack.getMin());
stack.push(1);
console.log(stack.getMin());
console.log(stack.pop());
console.log(stack.getMin());