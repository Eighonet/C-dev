#include "HeaderStackOnArr.h"




StackOnArray::StackOnArray(const StackOnArray &obj)
{
	if (this != &obj) {


		count_ = obj.count_;
		containment_ = new double[count_];

		for (int i = 0; i < obj.count_; i++) {
			containment_[i] = obj.containment_[i];
		}
	}
}

StackOnArray & StackOnArray::operator=(const StackOnArray & obj)
{
	if (this != &obj) {


		count_ = obj.count_;
		containment_ = new double[count_];

		for (int i = 0; i < obj.count_; i++) {
			containment_[i] = obj.containment_[i];
		}
	}
	else {
		return (*this);	
	}
}



StackOnArray::~StackOnArray()
{
	delete[] containment_;
}

void StackOnArray::Push(const double value)
{
	double* containmentS = containment_;
	containment_ = new double[++count_];
	for (int i = 0; i < (count_ - 1); i++) {
		containment_[i] = containmentS[i];
	}
	containment_[count_-1] = value;
}


bool StackOnArray::IsEmpty() const noexcept
{
	return 0 == count_;
}

void StackOnArray::Pop() noexcept
{
	double* containmentS = containment_;
	containment_ = new double[--count_];
	for (int i = 0; i < (count_); i++) {
		containment_[i] = containmentS[i+1];
	}
}

double StackOnArray::Top() const
{
	return containment_[count_-1];
}

void StackOnArray::Show() noexcept
{
	for (int i = 0; i < count_; i++) {
		std::cout << containment_[i] << ' ';
	}
}

