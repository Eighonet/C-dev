#include "main_class.h"

int main()
{
	using namespace std;
	
	Dynamical_Array B = Dynamical_Array();
	for (int i = 0; i < B.Range(); i++) {
		cout << B.Get(i) << " " <<endl;
	}

	Dynamical_Array C = Dynamical_Array(3);
	for (int i = 0; i < C.Range(); i++) {

		cout << C.Get(i) << " ";
	}
	cout << endl;

	double test[3]{ 3.4, 2.1, 1.943 };
	Dynamical_Array A = Dynamical_Array(3, test);
	~Dynamical_Array();
	for (int i = 0; i < A.Range(); i++) {

		cout << A.Get(i) << " ";
	}
	cout << endl;

	A.Add(7.6);
	A.Set(2, 3.77);
	for (int i = 0; i < A.Range(); i++) {
		cout << A.Get(i) << " ";

	}
}