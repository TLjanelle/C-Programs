#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// Declare file stream variables
	ifstream inFile;

	//Additonal Variable Declaration
	char schoolApplied;
	char parentAlum;

	double gpa;
	double satScore1;
	double satScore2;

	int countLiberal =0;
	int countMusic = 0;
	int countTotal = 1;

	//Open the input file
	inFile.open("mp3accept.txt");

	//Check for error with input file
	if (inFile.fail())
	{
		cerr << "Error opening file" << endl;
		exit(1);
	}
	else
	{
		//Print program title
		std::cout << "Acceptance to College by Janelle Gonzalez" << '\n' << "February 11, 2018" << endl;
	}

	//Test for more input
	while (inFile)
	{
		//Match data to application requirements
		do
		{
			inFile >> schoolApplied >> gpa >> satScore1 >> satScore2 >> parentAlum;

			//Print Applicant number
			cout << "Applicant #: " << countTotal << endl;

			// Count total number of applicants Applied
			countTotal = countTotal++;

			//Print School, GPA, Math SAT, Verbal SAT, & parent alumni status
			cout << "School = " << schoolApplied <<
				" GPA = " << gpa <<
				" Math = " << satScore1 <<
				" Verbal = " << satScore2 <<
				" Alumnus = " << parentAlum << endl;

			//Choose program applied to	
			switch (schoolApplied)
			{
				//Liberal Arts
			case 'L':

				//Print school applying to
				cout << "Applying to Liberal Arts!!\n";

				//Check to see if the parent is an Alumni or not
				switch (parentAlum)
				{
				case 'Y':

					//GPA must be 3.0 or above and SAT's must total to be equal to or above 1000
					if (gpa >= 3.0 && (satScore1 + satScore2) >= 1000)
					{
						//Print Accepted to school
						cout << "Accepted to Liberal Arts \n" <<
							"****************************\n";
						countLiberal++;
					}
					else
					{
						cout << "Rejected - ";

						if (gpa < 3.0)
						{
							cout << "GPA is too low \n";
						}

						if ((satScore1 + satScore2) < 1000)
						{
							cout << "SAT is too low \n";
						}

					}
					//End case for liberal arts applicant with parent alumni
					break;

					// Check acceptance without Parent Alumni
				case 'N':
					if (gpa >= 3.5 && (satScore1 + satScore1) >= 1200)
					{
						//Print Accepted to school
						cout << "Accepted to Liberal Arts \n" <<
							"****************************\n";
						countLiberal++;
					}
					else
					{
						cout << "Rejected - ";

						if (gpa < 3.5)
						{
							cout << "GPA is too low \n";
						}

						if ((satScore1 + satScore2) < 1200)
						{
							cout << "SAT is too low \n";
						}
					}

					//End case for liberal arts applicant without parent alumni
					break;

				// End switch stament checking for parent alumni
				default:
					break;
				}
				//End case for liberal arts
				break;

			//Music
			case 'M':

				//Print school applying to
				cout << "Applying to Music!!\n";

					//Math and verbal SAT must be at least 500
				if (gpa >= 3.0 && satScore1 >= 500 && satScore2 >= 500)
				{
					cout << "Accepted to Music\n" 
						<< "*********************\n" << endl;
					countMusic++;
				}
				else
				{
					cout << "Rejected -";
					if (gpa < 3.0)
					{
						cout << "GPA is too low\n";
					}
					if (satScore1 < 500 || satScore2 < 500)
					{
						cout << "SAT is too low\n";
					}
					cout << "*********************\n";
				}

			// End check for school applied to
			break;
			}


			//End program applied to
		}
		//No more than 5 people can be accepted to Liberal
		//No more than 3 can be accepted to Music
		while (countLiberal <= 5 && countMusic <= 3);
	}

		//Print number of applicants  
		cout << "There were " << countTotal << " applicants in the file" << endl;

		//Print number of applicants accepted to Liberal Arts
		cout << "There were " << countLiberal << " acceptances to Liberal Arts." << endl;

		//Print number of applicants accepted to Music
		cout << "There were " << countMusic << " acceptances to Music." << endl;
	

	//Close files


	return 0;
}