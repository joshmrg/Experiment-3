#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	cout << "\tThis program stores temperature of Province A, Province B, and Province C for a week / in 7 days." << endl;
	int i;
	double x[100], y[100], z[100];

	{
		cout << " " << endl;
		for (i = 1; i <= 7; i++)
		{
			cout << "Province A, Day " << i << ": ";
			cin >> x[i];
		}
		for (i = 1; i <= 7; i++)
		{
			cout << "Province B, Day " << i << ": ";
			cin >> y[i];
		}
		for (i = 1; i <= 7; i++)
		{
			cout << "Province C, Day " << i << ": ";
			cin >> z[i];
		}
		cout << " " << endl;
		cout << "Displaying Values:" << endl;
		for (i = 1; i <= 7; i++)
		{
			cout << "Province A, Day " << i << "= ";
			cout << x[i] << endl;
		}
		for (i = 1; i <= 7; i++)
		{
			cout << "Province B, Day " << i << "= ";
			cout << y[i] << endl;
		}
		for (i = 1; i <= 7; i++)
		{
			cout << "Province C, Day " << i << "= ";
			cout << z[i] << endl;
		}
		_getch();
		return 0;
	}

}