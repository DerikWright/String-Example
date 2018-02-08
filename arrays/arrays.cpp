// arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{

	string x = "Bacon is tasty. ";
	string y = "Don't you agree ?";
	string z = x + y;

	cout << z << endl;
	cout << z.size();

	
	cin.get();

	return 0;
}

