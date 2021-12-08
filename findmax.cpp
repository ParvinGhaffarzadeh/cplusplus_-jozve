// jalase5_cpp.cpp : Defines the entry point for the console application.
//

//
#include "stdafx.h"
#include "conio.h"
#include "string"

#include "iostream";


using namespace std;
int main()
{
	int a, b, c, max;
	cout << " please ente 3 numbers to find max : \n";
	cin >> a >> b >> c;
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	cout << " max is: \n" << max;
	cin.get();
	cin.get();
    return 0;
}

