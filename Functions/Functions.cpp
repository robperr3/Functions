// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string>

using namespace std;
string Hi(string name); //you dont have to define a funct b4 you use it, just declare it. 

void main()
{
	string name = "Archer";//making string var
	Hi(name); // putting the string name
	name = "Barney";
	string getReturn;
	getReturn = Hi(name);
	cout << "the function said back to us " << getReturn << endl;
	system("pause");
    return;
}

string Hi(string name)
{
	cout << "Hello " << name << endl;
	return "Hi Yourself";
}