#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	int gallons;
	cout << "Water Consumption(gallons): "; cin >> gallons;

	float WaterDemandCharge = 35, ConsumptionCharge = 1.10, 
	TotalCharge = WaterDemandCharge + (ConsumptionCharge * gallons), 
	TotalLateCharge = TotalCharge + 20, AmountPaid;
	
	cout << "Total Amount Due: " << TotalCharge << endl;
	cout << "Enter Amount of Payment: "; cin >> AmountPaid;

	if (AmountPaid < TotalCharge)
	{
		cout << "The total amount due is: " << TotalLateCharge 
		<< ", an additional late charge fee of P20 is added." "\n" "Please pay the said amount: "; 
		cin >> AmountPaid;
		
		if (AmountPaid < TotalLateCharge)
		{
			cout << "The amount paid is still not enough. Please pay sufficient amount." << endl;
		}
		else
		{
			cout << "Payment received! You have a change of " 
			<< AmountPaid - TotalLateCharge << "." << endl;
		}
	}
	else
	{
		cout << "Payment received! Your total amount due is " << TotalCharge 
		<< " with a total change of " 
		<< AmountPaid - TotalCharge << "." << endl;
	}

	cout << "Thank you! We appreciate your continuous support to our service!";

	_getch();
	return 0;
}
