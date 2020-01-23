#include "Header.h"

int main() {
	using namespace std;
	Rational z(2, 4);
	Rational k(1, 2);
	
	z = z * k;
	cout << z << endl;
	
	z = k + k;
	cout << z << endl;
	
	z = z - k;
	cout << z << endl;


	z = z / k;
	cout << z << endl;


	z.testParse("{2/2}");
	cout << z << endl;
	z += k;
	cout << z << endl;

	//Rational f(1, 0);

	return 0;
}