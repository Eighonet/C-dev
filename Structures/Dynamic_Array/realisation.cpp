#include "main_class.h"


Dynamical_Array::~Dynamical_Array()
{
	delete [] containment_;
}

Dynamical_Array::Dynamical_Array(int count) {
	range_ = count;
	containment_ = new double[range_];
	for (int i = 0; i < range_; i++) {
		containment_[i] = 0;	
	}
}


Dynamical_Array::Dynamical_Array(int count, double* addition) {
	range_ = count;
	containment_ = new double[range_];
	for (int i = 0; i < range_; i++) {
		containment_[i] = addition[i];
	}
}

void Dynamical_Array::Dynamical_Array::Add(int count, double * addition)
{
	for (int i = 0; i < count; i++){ 
		Add(addition[i]);
	}
}

void Dynamical_Array::Add(double value)
{
	Dynamical_Array A = Dynamical_Array(++range_, containment_);
	containment_ = new double[range_];
	for (int i = 0; i < (range_-1); i++) {
		containment_[i] = A.Get(i);
	}
	containment_[--range_] = value;
	range_++;
}

int Dynamical_Array::Range()
{
	return range_;
}

void Dynamical_Array::Dynamical_Array::Set(int number, double value)
{
	containment_[number] = value;
}

double Dynamical_Array::Dynamical_Array::Get(int number)
{
	return containment_[number];
}
