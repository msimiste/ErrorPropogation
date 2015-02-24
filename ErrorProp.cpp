#include "Stdafx.h"

#include "ErrorProp.h"
#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include "ErrorProp.h"


using namespace std;

namespace ErrorProp
{

	void add()
	{
		int values=0;
		
		double input;
		double Q = 0;
		double err = 0;
		bool repeat = false;
		cout << "Please enter the number of values to be added: \n";
		cin >> values;
		int count = values;		
		
		while (count-- > 0)
		{
			cout << "Enter value " << (values - count) << "\n";
			cin >> input;
			Q+= input;
			cout << "Enter error " << (values - count) << "\n";
			cin >> input;
			err+= pow(input, 2.0);
		}

		err = sqrt(err);
		cout << "The propogated value is " << Q << " +/- " << err;
		
		if(again())
			add();		

	}

	void multiply()
	{
		int values = 0;
		double input1;
		double input2;
		double Q = 1;
		double err = 0;		
		cout << "Please enter the number of values to be multiplied: \n";
		cin >> values;
		int count = values;

		while (count-- > 0)
		{
			cout << "Enter value " << (values - count) << "\n";
			cin >> input1;
			Q *= input1;
			cout << "Enter error " << (values - count) << "\n";
			cin >> input2;
			err += pow((input2/input1), 2.0);
		}

		err = sqrt(err)*(abs (Q));
		cout << "The propogated value is " << Q << " +/- " << err;

		if (again())
			multiply();
	}
	void exponent()
	{
		double input1;
		double input2;
		double input3;
		double Q = 0;
		double err = 0;

		do 
		{
			cout << "Please enter the base " << "\n";
			cin >> input1;		
			cout << "Please enter the exponent " << "\n";
			cin >> input2;
			cout << "Enter error (+/-) " << "\n";
			cin >> input3;
			Q = pow(input1, input2);
			err =(abs (Q)) * (abs (input2)) * (input3/input1);
			cout << "The propogated value is " << Q << " +/- " << err;
		} while (again());
	}

	bool again()
	{
		string ans;
		cout << "\nDo you want to do another calculation? \n";
		cin >> ans;		
		if ((ans.substr(0, 1)=="Y" ) || (ans.substr(0, 1)=="y"))
			return true;
		else
			return false;
	}
}