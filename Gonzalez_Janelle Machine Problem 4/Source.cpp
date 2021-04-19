// Machine Problem 4 by Janelle Gonzalez
// Roman Numeral Calculator
// This program inputs two Roman numbers and an arithmetic operator and 
// prints out the result of the operation, also as a Roman number

#include <iostream>
#include <fstream>
#include <string>
#include <functional>

using namespace std;

//Function prototypes
string getData(string); //getData function

int convert_Roman_to_Decimal(char);		//Roman to Decimal function

//insert function prototypes here

void print_Result(int);		//Print Result Function

//Read input file in series of chars and send back the value
char get_Data()
{
	ifstream inData; //input
	ifstream outData; //output
	char roman;

	//Open file
	inData.open("mp4romanletrdata.txt", ios::in);

	//Check for opened file
	if (inData.is_open())
	{
		cout << "open file" << endl;

		//Call function convert_from_Roman_to_Decimal funtion
		char roman = 0;
		convert_Roman_to_Decimal(roman);
	}
	else
		cout << "Unable to open file" << endl;
	return 0;
}

//Receive a char and return its corresponding integer value as an integer
int convert_Roman_to_Decimal(char roman)
{
	for (i = 0; i <= n, i++)
	{
		switch (roman)
		{
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case'M':
			return 1000;
			break;
		}
	}
}

//Function to Print Result
void printResult()
{
	cout << "The first number is " << endl
		<< "The second number is " << endl
		<< "The operator is " << endl
		<< "The result is " << endl
		<< "***************************************" << endl;
}

int main()
{
	//Call function to getData
	get_Data();

	//Call function to get arithmetic operator

	//Call function to calculate two integer values

	//Call function to Print Result
	 printResult();

	system("pause");
		return 0;
}