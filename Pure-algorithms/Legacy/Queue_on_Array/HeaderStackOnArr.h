#pragma once
#ifndef STACK_ON_ARRAY
#define STACK_ON_ARRAY
#include <iostream>

class StackOnArray {
public:
	StackOnArray() = default;
	StackOnArray(const StackOnArray& obj);
	StackOnArray& operator=(const StackOnArray& obj);
	~StackOnArray();
	void Push(const double value);
	bool IsEmpty() const noexcept;
	void Pop() noexcept;
	double Top() const;
	void Show() noexcept;
private:
	double* containment_; 
	int count_ = 0;
};



#endif
