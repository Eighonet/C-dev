
#include "HeaderStackOnArr.h"
using namespace std;
int main()
{
	int i;
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
	B.Push(1);
	B.Push(1);
	B.Show();
}