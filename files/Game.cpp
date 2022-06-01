#include<iostream>
#include<ctime>
#include"Game.h"

using namespace std;

//beginGuessing Method
void Guess::beginGuessing(int m, int n) {

	generateRandomNumber(m, n);
	srand(time(0));

	int* guessAttempt = new int[n];

	while (true)
	{
		cout << "Enter your guessses for the " << n << " integers in the range from 1 to " << m << " that have been selected: \n";

		//While i < user specified range (n), recieve guessAttempt(s)
		for (int i = 0; i < n; i++)
		{
			cin >> guessAttempt[i];
		}

		for (int i = 0; i < n; i++)
		{
			randomNumbersFound[i] = 0;
		}

		//counts number of correct guess user makes
		int count = 0;
		for (int i = 0; i < n; i++)  //Looping through guessAttempts Array
		{
			for (int j = 0; j < n; j++)  //Looping through randomNumbers Array
			{
				if (guessAttempt[j] == randomNumbersGenerated[i])
				{
					if (randomNumbersFound[j] == 0)
					{
						//randomNumbersFound[j] = 1 to avoid match on duplicate numbers 
						randomNumbersFound[j] = 1;
						count++;
					}
					break;
				}
			}
		}

		//If the number of correct integers guessed equals the user specified correct integers(n)
		if (count == n)
		{
			cout << "You are correct!\n";

			//Deletes the randomNumbersFound counter array so the user may play again.
			delete[] randomNumbersFound;
			delete[] randomNumbersGenerated;
			return;
		}
		else
		{
			cout << count << " of your guess are correct. \n\n";
		}

	} //End While
} // End beginGuessing

//GenerateRandomNumber Method
void Guess::generateRandomNumber(int m, int n) {

	randomNumbersGenerated = new int[m];
	randomNumbersFound = new int[m];

	for (int i = 0; i < n; i++)
	{
		randomNumbersFound[i] = 0;
	}

	//cout << "Game random number: ";
	for (int i = 0; i < n; i++)
	{
		randomNumbersGenerated[i] = rand() % m + 1;
		//cout << randomNumbersGenerated[i] << " ";
	}
	cout << endl;
} //End generateRandomNumber