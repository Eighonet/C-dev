#include <stdexcept>
#include <iostream>

#include "Header.h"


StackOnList::~StackOnList() {
	Clear();
}


StackOnList::StackOnList(const StackOnList& rhs)
{
	Node** endPtr = &data_;

	for (Node* list = rhs.data_; list; list = list->next)
	{
		(*endPtr) = new Node(*list);
		endPtr = &((*endPtr)->next);
	}
}

StackOnList& StackOnList::operator=(const StackOnList& rhs) {
	if (this != &rhs) {
		Node* tmp = this->data_;

		while (tmp != 0)
		{
			Push(tmp->data);
			tmp = tmp->next;
		}
	}
	return *this;
}


int StackOnList::Top() const {
	if (nullptr == data_) {
		throw std::logic_error("Try get top from enpty stack.");
	}
	return data_->data;
}


void StackOnList::Pop() noexcept {
	if (nullptr != data_) {
		Node* node_deleted(data_);
		data_ = data_->next;
		delete node_deleted;
	}
}


void StackOnList::Clear() noexcept {
	while (!IsEmpty()) {
		Pop();
	}
}


bool StackOnList::IsEmpty() const noexcept {
	return nullptr == data_;
}


void StackOnList::Push(const int value) {
	data_ = new Node(data_, value);
}


std::ostream& StackOnList::WriteTo(std::ostream& ostrm) const {
	Node* printed_node(data_);
	ostrm << '{';
	while (printed_node) {
		ostrm << printed_node->data;
		printed_node = printed_node->next;
		if (printed_node) {
			ostrm << ", ";
		}
	}
	ostrm << '}';
	return ostrm;
}