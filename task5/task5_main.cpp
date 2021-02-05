#include <iostream>
#include <math.h>
using namespace std;
double f(double x);
void main()
{
	double x = 5;
	cout << "x = " << x << '\n' << "f = " << round(f(x) * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	cout << "f = " << round(f(x) * 10000) / 10000 << endl;
}