
#include "HeaderStackOnArr.h"
using namespace std;
int main()
{
	StackOnArray A;

	cout << A.IsEmpty() << endl;
	A.Push(5);
	cout << A.IsEmpty() << endl;
	A.Push(3);
	A.Push(1);
	StackOnArray B(A);
	B.Pop();
	cout << B.Top() << endl;
	B.Show();
}