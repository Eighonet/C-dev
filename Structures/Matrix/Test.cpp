#include "Header.h";
int main() {

	matrix A, B(2);
	matrix C(2);
	B[0][0] = 1;
	B[0][1] = 2;
	B[1][0] = 3;
	B[1][1] = 4;
	std::cout << B << std::endl;
	A = B;
	A[0][0] = 10;
	A = A - B;
	std::cout << A << std::endl;
	C[0][0] = 10;
	C[0][1] = 5;
	C[1][0] = 2;
	C[1][1] = 7;
	A = B * C;
	std::cout << A << std::endl;
	long double k = 3;
	A = A * k;
	std::cout << A << std::endl;
}