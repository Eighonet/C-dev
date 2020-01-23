#pragma once
#include <iostream>
#include <fstream>


class matrix {
public:

	matrix() = default;
	matrix(int i);
	matrix(int i, int j);
	matrix(const matrix & m);
	~matrix();

	int Column() const { return ran_col_; }
	int String() const { return ran_str_; }

	long double& element(int i, int j) { return containment_[i][j]; }
	const long double& element(int i, int j) const { return containment_[i][j]; }

	long double * operator[](int k) { return containment_[k]; }
	const long double * operator[](int k) const { return containment_[k]; }

	matrix operator- (matrix& m);
	matrix operator+(matrix& m);
	matrix operator*(matrix& m);
	matrix operator* (long double& m);

	matrix & operator=(const matrix& m);
	friend std::ostream & operator<<(std::ostream & os, const matrix &temp);


private:
	int ran_str_;
	int ran_col_;
	long double **containment_;
	void Create_();
};