#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int main()
{
	char array[200];
	int sukat;
	cout << "Enter characters: ";
	cin.getline(array, 200);
	sukat = strlen(array);
	for (int i = sukat; i >= 0; i--)
	{
		cout << array[i];
	}
	cout << "\n\nArray size = " << sukat+1 << endl;
	_getch();
	return 0;
}