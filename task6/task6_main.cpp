#include <iostream>
#include <math.h>
using namespace std;
extern double x, result;
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