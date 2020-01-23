#include <stdexcept>
#include "Header.h"
using namespace std;

List::~List() noexcept {
	Node *temp = head_;                     
	while (temp != NULL) {
		temp = head_->Next;                 
		delete head_;                       
		head_ = temp;                       
	}
}

List::List(const List & rhs)
{
	Node** endPtr = &edge_;
	Node** headPtr = &head_;
	int i = 0;
	if (i == 0) {
		(*headPtr) = (*endPtr) = new Node(*rhs.head_);
		headPtr = endPtr = &((*endPtr)->Next);
		i++;
	}
	for (Node* list = rhs.edge_; list; list = list->Next) {
			(*endPtr) = new Node(*list);
			endPtr = &((*endPtr)->Next);
	}

}

List & List::operator=(const List & rhs)
{
	if (this != &rhs) {
		Node* tmp = this->edge_;

		while (tmp != 0)
		{
			Push(tmp->data);
			tmp = tmp->Next;
		}
	}
	return *this;
}

void List::Push(int x) noexcept {
	Node* temp = new Node(nullptr, x);
	if (head_ != NULL) {
		edge_->Next = temp;
		edge_ = temp;
	}
	else head_ = edge_ = temp;
}




void List::Show() noexcept {
	Node *temp = head_;                 
	while (temp != NULL){
		cout << temp->data << " ";        
		temp = temp->Next;           
	}
	cout << endl;
}



void List::Pop() noexcept {
	if (head_ != NULL)                   
	{
		Node *temp = head_;              
		head_ = head_->Next;              
		delete temp;                    
	}
}

int List::Size() const
{
	return elements_;
}

bool List::IsEmpty() const noexcept
{
	return nullptr == head_;
}

int List::Top() const
{
	if (nullptr == edge_) {
		throw std::logic_error("Try get top from enpty stack.");
	}
	return edge_->data;
}

