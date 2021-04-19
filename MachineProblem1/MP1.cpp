//Machine Problem 1
//Display to screen
#include <iostream>
#include <cmath>

using namespace std;

//Main Program Execution
int main()
{
//Display Date and Geometry formulas by Janelle Gonzalez and date completed
	cout << "January 28, 2018 \n";
	cout << "Geometry Formulas by Janelle Gonzalez \n";

//Declare variables
	float cmLength;
	float mLength;
	float squareArea;
	float circleArea;
	float differenceArea;
	float cubeVolume;
	const float pi = 3.1459;
	
//Input length
	cout << "Enter one floating point number for length, ";
	cin >> cmLength;

//Calculations
	mLength = cmLength / 100;
	squareArea = mLength * mLength;
	circleArea = (mLength * mLength) * pi;
	differenceArea = circleArea - squareArea;
	cubeVolume = mLength * mLength * mLength;

//Output 
	//Disply number entered
		cout << "\nThe number you entered is " << cmLength << " cm or ";
		cout << mLength << " m.\n";

	//Display area of a square
		cout << "Area of a square is " << squareArea << " sq. m.\n";

	//Display area of a circle
		cout << "Area of a circle is " << circleArea << " sq. m.\n";

	//Display how much bigger the area of the square is than the circle
		cout << "Difference is " << differenceArea << " sq. m.\n";

	//Display round the length down to the next whole number of centimeters, compute the volume of a cube with this value as the length of its side
		cout << "\nCube volume rounded down is " << floor(cubeVolume) << " cu. m.\n";

	//Round the length up to the next whole number of centimeters, compute the volume of a cube with this value as the length of its side.
		cout << "Cube volume rounded up is " << ceil(cubeVolume) << " cu. m.\n";

//End Program
	system("pause");
	return 0;
}
