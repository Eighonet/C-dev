using namespace std;
#include <iostream>
#include <math.h>

double f(double x)
{
	return (tan(x) - x -1);
}

int main()
{
	double eps = 0.000001;
	double x0 = 1.2, xn = 1.0;
	while (abs(xn - x0) > eps)
	{
		double temp = xn;
		xn = xn - ((xn - x0) / (f(xn) - f(x0))*f(xn));
		x0 = temp;
		cout << xn << " ";
	}
	cout << endl << xn << endl;
	cin >> xn;
}