#include <iostream>
#include <math.h>
using namespace std;
double result;
double x = 5;
void f();
void main()
{
	f();
	cout << "x = " << x << '\n' << "f = " << round(result * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	f();
	cout << "f = " << round(result * 10000) / 10000 << endl;
}
void f()
{
	result = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
}