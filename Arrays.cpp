#include "pch.h"
#include <iostream>
using namespace std;

int myarray[3]{ 10,0,30 };

int main()
{
	for (int i = 0; i < 3; ++i)
	{
		cout << myarray[i] << endl;
		cout << ++myarray[i] << endl;
	}
	cout << "next" << endl;
	for (int elem : myarray) 
	{
		cout << elem << endl;
	}
	//cout << "Hello World!\n"; 
	cin.get();
	return 0;
}
