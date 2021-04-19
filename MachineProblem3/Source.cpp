//Machine Problem by Janelle Gonzalez

//A realestate office handles 50 apartment units. 
//When the rent is $600 per month, all the units are occupied.
//For each $40 increase in rent, one unit becomes vacant.
//Each occupied unit requires $27 per month maintenance. 

//This program will calculate the number of units to rent in order to maximize profit.

#include <iostream>

using namespace std;

int main ()
{
	//Declare variables

	int numberOfUnits;
	int rent;
	int increaseRent;
	int unitMaintenanceCost;

	int vacantUnits = 0;
	int unitsToRent = 0;
	int totalMaintenanceCost = 0;
	
	int profit = 0;
	int previousProfit = 0;
	int netRent = 0;

	//Prompt user to enter:
	
		// 1. Total number of units

		cout << "Enter the total number of rental units: ";
		cin >> numberOfUnits;

		// 2. The rent to occupy all units
	
		cout << "Enter the rent amount at maximum occupancy: ";
		cin >> rent;

		// 3. The increase in rent that results in a vacant unit

		cout << "Enter the increase in rent that results in a vacant unit: ";
		cin >> increaseRent;

		// 4. Amount to maintain a rented unit

		cout << "Enter the amount to maintain a rented unit: ";
		cin >>  unitMaintenanceCost;

	// Calculate the number of units that should be rented to maximize profit

	for (vacantUnits = 0; vacantUnits < numberOfUnits; vacantUnits++)
		{
			unitsToRent = numberOfUnits - vacantUnits;
			rent = rent + (vacantUnits * increaseRent);
			
			totalMaintenanceCost = unitMaintenanceCost * unitsToRent;
			netRent = rent * unitsToRent;

			profit = netRent - totalMaintenanceCost;

			//Compare current calculated profit to the previous profit
			//If the profit is greater than the previous profit then continue
			if (profit > previousProfit)
			{
				previousProfit = profit;
				continue;
			}
			//if the profit is less than the pervious profit, add one to number of units to rent
			//and stop
			else if (profit < previousProfit)
			{
				unitsToRent = unitsToRent + 1;

				break;
			}
		}

	//Display the number of units to rent in order to maximize profit
	cout << "Rent " << unitsToRent << " units in order to maximize profit. \n";

	//Force console to pause and ask the user to press any key to close and contine
	system("pause");
	return 0;
}