#include "Header.h"

#include <iostream>

int main() {

	StackOnList stDef;
	std::cout << "Let's create stack. Stack is " << stDef << std::endl;
	std::cout << "Is def create stack emty -> " << stDef.IsEmpty() << std::endl;

	StackOnList st;
	int val(10);
	std::cout << "Let's push " << val << std::endl;
	st.Push(val);
	std::cout << "Stack is " << st << std::endl;
	std::cout << "Is stack empty -> " << st.IsEmpty() << std::endl;
	std::cout << "Top value is   -> " << st.Top() << std::endl;
	std::cout << "Let's pop " << std::endl;
	st.Pop();
	std::cout << "Stack is " << st << std::endl;
	std::cout << "Is stack empty -> " << st.IsEmpty() << std::endl;

	std::cout << "Let's push values from " << (val + 1) << " to " << (val + 3) << std::endl;
	st.Push(val + 1);
	st.Push(val + 2);
	st.Push(val + 3);
	std::cout << "Stack is " << st << std::endl;
	std::cout << "Top value is   -> " << st.Top() << std::endl;
	std::cout << "Let's check copy constuctor - will he work?" << std::endl;
	StackOnList stDef2(st);
	std::cout << "Stack is " << stDef2 << std::endl;
	std::cout << "Top value of copy is   -> " << stDef2.Top() << std::endl;
	std::cout << "Let's see at result of overloading = :" << std::endl;
	StackOnList stDef3 = stDef2;
	std::cout << "Stack is " << stDef3 << std::endl;
	stDef3.Push(val);
	std::cout << "Stack is " << stDef3 << std::endl;
}