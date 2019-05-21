//PROBLEM 1//
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << "\t\t This program shows the smallest and largest integer, the total, and the average of 10 numbers. \n";
	cout << "Enter the 10 numbers: ";
	float XD[10], add = 0, z, a;
	for (int i = 0; i < 10; i++)
	{
		cin >> XD[i];
		if (i == 0)
		{
			z = XD[i];
			a = XD[i];
		}
		else
		{
			if (XD[i] > z)
				z = XD[i];
			if (XD[i] < a)
				a = XD[i];
		}
		add += XD[i];
	}
	cout << "The smallest number is:  " << a << endl;
	cout << "The largest number is: " << z << endl;
	cout << "The sum of the 10 numbers is: " << add << endl;
	cout << setprecision(2) << fixed << "The average if the 10 number is: " << (add / 10);

	_getch();
	return 0;
}