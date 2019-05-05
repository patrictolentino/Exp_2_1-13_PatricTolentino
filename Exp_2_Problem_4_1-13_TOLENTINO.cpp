#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int x;
	cout << "Counting... \n";

	for (x = 1; x < 10; x++)
	{
		cout << x << ",";
	}
	for (x = 10; x >= 10, x <= 30; x += 2)
	{
		cout << x << ",";
	}

	cout << " ";

	_getch();
	return 0;
}
