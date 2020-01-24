#pragma once
#include <iostream>

class Dynamical_Array
{
public:
	Dynamical_Array() = default;
	~Dynamical_Array();
	Dynamical_Array(int count);
	Dynamical_Array(int count, double* addition);
	void Add(int count, double* addition);
	void Add(double value);
	int Range();
	void Set(int number, double value);
	double Get(int number);

private:
	double* containment_;
	int range_;
};
