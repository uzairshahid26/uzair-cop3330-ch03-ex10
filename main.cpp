/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Muhammad Uzair
 */

#include "std_lib_facilities.h"	


int main()
try
{
	string operation;
	double val1 = 0;	
	double val2 = 0;	
	cout << "Please enter an operation first such as (+, -, *, /, plus, minus, mul, div) followed by two values separated by a space: ";
	
	while(cin >> operation >> val1 >> val2) {	
												
												
		double res = 0;
		if (operation=="plus" || operation=="+") res = val1+val2;
		else if (operation=="minus" || operation=="-") res = val1-val2;
		else if (operation=="mul" || operation=="*") res = val1*val2;
		else if (operation=="div" || operation=="/") {
			if (val2==0) error("trying to divide by zero");
			res = val1/val2;
		}
		else error("sorry: bad operator: ",operation);

		cout << val1 << operation << val2 << " == " << res <<'\n';
		cout << "Please enter Exit to exit";
	}
}

catch (runtime_error e) {	
	cout << e.what() << '\n';
	keep_window_open("Exit");	
}
