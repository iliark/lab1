#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{
	return cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
}
void main()
{
	double x = 5;
	cout << "x = " << x << '\n' << "f = " << round(f(x) * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	cout << "f = " << round(f(x) * 10000) / 10000 << endl;
}

