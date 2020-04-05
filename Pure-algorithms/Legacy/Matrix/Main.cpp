#include "Header.h";



void matrix::Create_() {
	containment_ = new long double*[ran_str_];
	containment_[0] = new long double[ran_str_* ran_col_]{ 0 };
	for (int i = 1; i < ran_str_; ++i) {
		containment_[i] = (*containment_) + i * ran_col_;
	}
}
std::ostream & operator<<(std::ostream& os, const matrix &temp) {
	for (int i = 0; i < temp.ran_str_; i++) {
		for (int j = 0; j < temp.ran_col_; j++)
			os << temp.containment_[i][j] << " ";
		os << std::endl;
	}
	return os;
}

matrix::matrix(int i) {
	ran_str_ = ran_col_ = i;
	matrix::Create_();
};


matrix::matrix(int i, int j) {
	ran_str_ = i;
	ran_col_ = j;
	Create_();
};

matrix::~matrix() {
	delete [] containment_;
}

matrix matrix::operator-(matrix& m) {
	matrix res(*this);
	for (int i = 0; i < res.ran_str_; ++i) {
		for (int j = 0; j < res.ran_col_; ++j)
			res.containment_[i][j] -=  m.containment_[i][j];
	}
	return res;
}

matrix matrix::operator+(matrix& m) {
	matrix res(*this);
	for (int i = 0; i < res.ran_str_; ++i) {
		for (int j = 0; j < res.ran_col_; ++j)
			res.containment_[i][j] += m.containment_[i][j];
	}
	return res;
}

matrix matrix::operator*(matrix& m) {
	matrix res(this->ran_str_, m.ran_col_);
	for (int i = 0; i < this->ran_str_; i++)
	{
		for (int j = 0; j < m.ran_col_; j++)
		{
			res[i][j] = 0;
			for (int k = 0; k < this->ran_col_; k++)
				res[i][j] += containment_[i][k] * m[k][j];
		}
	}
	return res;
}

matrix matrix::operator*(long double & m)
{
	matrix res(*this);
	for (int i = 0; i < res.ran_str_; ++i) {
		for (int j = 0; j < res.ran_col_; ++j)
			res.containment_[i][j] *= m;
	}
	return res;
}

matrix & matrix::operator=(const matrix& M) {
	if (this != &M) {
		this->~matrix();
		ran_str_ = M.ran_str_;
		ran_col_ = M.ran_col_;
		Create_();

		for (int j = 0, l = ran_str_ * ran_col_; j < l; ++j)
			containment_[0][j] = M.containment_[0][j];
	}

	return *this;
}

matrix::matrix(const matrix& M) {
	ran_str_ = M.ran_str_;
	ran_col_ = M.ran_col_;
	Create_();
	for (int i = 0; i < ran_str_; ++i) {
		for (int j = 0; j < ran_col_; ++j)
			containment_[i][j] = M.containment_[i][j];


	}
};
