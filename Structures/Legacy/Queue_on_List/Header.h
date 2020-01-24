#pragma once
#ifndef QUEUE_ON_LIST
#define QUEUE_ON_LIST

#include <iostream>


class List
{
private:
	struct Node {
		Node* Next{ nullptr };
		int   data{ 0 };

		Node(Node* p, const int v)
			: Next(p), data(v) {
		}
	};
private:
	int elements_ = 0;
	Node* edge_{ nullptr };
	Node* head_{ nullptr };
public:
	List() = default;
	List(const List& rhs); //IN PROGRESS
	List& operator=(const List& rhs); //IN PROGRESS
	~List();                           
	void Push(int x) noexcept;                  
	void Show() noexcept;                   
	void Pop() noexcept;                    
	int Size() const;
	bool IsEmpty() const noexcept;
	int Top() const;

};

#endif