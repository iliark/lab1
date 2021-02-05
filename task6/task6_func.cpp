#include <iostream>
using namespace std;
double result;
double x = 5;
void f()
{
	result = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
}