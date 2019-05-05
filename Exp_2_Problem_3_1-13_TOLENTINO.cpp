#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int x, y;
	double V;
	const double z = 2.5;

	cout << "Conditions:\n";
	cout << "1. V = xyz when x = 1 and 1 < y < 5\n";
	cout << "2. V = x + y/z when x = 1 and y >= 5\n";
	cout << "3. V = |(x . y)/z| when x = 2 and y <= 5\n";
	cout << "4. V = x - (sqrt(y + z)) when x = 2 and y > 5\n";
	cout << "5. V = x + y + z for other values of x and y\n\n";
	cout << "Enter value of x: "; cin >> x;
	cout << "Enter value of y: "; cin >> y;

	if (x == 1 && 1 < y < 5)
	{
		V = x * y * z;
		cout << "The value of V is: " << V 
		<< setw(10) 
		<< setprecision(2);
	}
	else if (x == 1 && y >= 5)
	{
		V = x + (y / z);
		cout << "The value of V is: " << V 
		<< setw(10) 
		<< setprecision(2);
	}
	else if (x == 2 && y <= 5)
	{
		V = abs((x - y) / z);
		cout << "The value of V is: " << V 
		<< setw(10) 
		<< setprecision(2);
	}
	else if (x == 2 && y > 5)
	{
		V = x - (sqrt(y + z));
		cout << "The value of V is: " << V 
		<< setw(10) 
		<< setprecision(2);
	}
	else
	{
		V = x + y + z;
		cout << "The value of V is: " << V 
		<< setw(10) 
		<< setprecision(2);
	}

	_getch();
	return 0;
}
