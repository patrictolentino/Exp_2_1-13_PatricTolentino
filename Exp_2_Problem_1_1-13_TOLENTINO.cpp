#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	string package;
	float price;
	float hours;
	cout << ("Enter Package: "); 
	cin >> package;

	if (package == "A")
	{
		cout << "Hours of access: "; 
		cin >> hours;
		{
			if (package == "A")
			{
				if (hours <= 10)
				{
					price = 995;
				}
				else (hours > 10);
				{
					price = 995 + (hours - 10) * 20;
				}
			}
		}
	}
	if (package == "B")
	{
		cout << ("Hours of access: "); 
		cin >> hours;
		{
			if (package == "B");
			{
				if (hours <= 20)
				{
					price = 1495;
				}
				else (hours > 20);
				{
					price = 1495 + (hours - 20) * 10;
				}
			}
		}
	}
	if (package == "C")
	{
		cout << ("Hours of access: UNLIMITED ACCESS""\n");
		{
			price = 1995;
		}
	}
	cout << ("Amount Due: P") << price;

	_getch();
	return 0;
}
