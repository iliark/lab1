#include <iostream>
#include <math.h>
using namespace std;
void main()
{ 
	double x = 5;
	double f = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
	cout << "x = " << x <<'\n' << "f = " << round(f * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	f = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
	cout << "f = " << round(f * 10000) / 10000 << endl;
}
