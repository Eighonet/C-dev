
#include "pch.h"
#include "Header.h"

int main() {

	Complex z;
	z += Complex(8.0);
	std::cout << z << std::endl;

	z += 4;
	std::cout << z << std::endl;

	Complex e(1, 8);
	e -= 1;
	std::cout << e << std::endl;

	e -= Complex(2, 11);
	std::cout << e << std::endl;


	Complex q(4, 9), t(3, 10);
	Complex f = q + t;
	std::cout << f << std::endl;

	f = q - t;
	std::cout << f << std::endl;


	Complex w(4, 2);
	w *= 8;
	std::cout << w << std::endl;

	w *= Complex(3, 4);
	std::cout << w << std::endl;

	w.testParse("{8.9,9}");
	w.testParse("{8.9, 9}");
	std::cout << w << std::endl;

	w.testParse("{8.9,9");
	std::cout << w << std::endl;

	return 0;
}
