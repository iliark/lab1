#include <iostream>
#include <math.h>
#include "func.h"
using namespace std;
void main(void)
{
	f();
	cout << "x = " << x << '\n' << "f = " << round(result * 10000) / 10000 << endl;
	cout << "x = ";
	cin >> x;
	f();
	cout << "f = " << round(result * 10000) / 10000 << endl;
}