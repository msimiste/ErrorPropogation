#include <cstdlib>
#include<iostream>
#include <stdio.h>
#include <iomanip>
#include "ErrorProp.h"



using namespace std;
using namespace ErrorProp;

int main()
{
	double a = 10, b = 3, c = 5, d = 4;

	// testing addition method
	addEprop(a,b,c,d);
	cout << "The addition propogated value is " << a << " (+/-) " << setprecision(15) << b;
	a = 10; // resetting the test value for a
	b = 3;	// resetting the test value for b

	//testing multiplication method
	multEprop(c,d,a,b);
	cout << "\nThe multiplied propogated value is " << c << " (+/-) " << setprecision(15) << d;

	//testing the exponentiation method
	expEprop(a,2,b);
	cout << "\nThe exponent propogated value is " << a << " (+/-) " << setprecision(15) << b;
	a = 10; // resetting the test value for a
	b = 3; // resetting the test value for b
	
	//testing the exact value multiplication method
	exactValEprop(5, a, b);
	cout << "\nThe  propogated value is " << a << " (+/-) " << setprecision(15) << b;

	
	cin >> d; // to keep the console open
	return 0;
}