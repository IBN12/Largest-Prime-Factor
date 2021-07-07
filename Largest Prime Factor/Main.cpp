/*
Program: Largest Prime Factor
Description: Will search for prime factors within a certain index range.

Note: The original program is on my desktop pc. 

Date: 6-3-2021
*/

#include <iostream> 
#include <cmath>
using namespace std; 


int main()
{
	// local variables
	int testIndex = 1;
	int oneIsNotAPrime = 0;
	int productOfTwoNaturalNumbers = 0;
	double testNum = 2;
	double divisor = 1;
	double quotient[13];

	bool mainControl = false;
	bool searchingForPrimes = false;

	// statements
	while (!mainControl) // while loop - will control the overall search
	{
		// while loop - will search for prime numbers
		// within a certain index range starting with
		// the prime integer 2. 
		while (!searchingForPrimes)
		{
			divisor++; // increment the divisor because 1 is neither a prime or a composite number. 

			quotient[testIndex] = testNum / divisor;

			// if statement - searching for primes
			if (quotient[testIndex] == 1)
			{
				oneIsNotAPrime++;
			}
			else if (quotient[testIndex] != floor(quotient[testIndex]))
			{
				testIndex++;
			}
			else
			{
				productOfTwoNaturalNumbers++;
				divisor = 1;
				testIndex = 1;
				searchingForPrimes = true;
			}

			// if statement - testIndex has reached its limit
			if (testIndex == 13)
			{
				divisor = 1;
				testIndex = 1;
				searchingForPrimes = true;
			}
		} // end searchingForPrimes

		// if statement - test for prime or non-prime number
		if (productOfTwoNaturalNumbers == 0)
		{
			cout << testNum << " is a prime number." << endl;
			//cout << "Natural Number Index: " << productOfTwoNaturalNumbers << endl << endl;
			//cout << "testIndex: " << testIndex << endl;
		}
		else
		{
			cout << testNum << " is not a prime number." << endl;
			//cout << "Natural Number Index: " << productOfTwoNaturalNumbers << endl << endl;
		}

		// if statement - testNum has reached its limit
		if (testNum == 12)
		{
			cout << "Search has ended..." << endl;
			mainControl = true;
		}
		else
		{
			testNum++;
			productOfTwoNaturalNumbers = 0;
			searchingForPrimes = false;
		}

	}// end mainControl
	cout << endl;
	cout << "See Ya Later Space Cowboy" << endl;
	
	return 0; 
}