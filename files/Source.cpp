#include<iostream>
#include<string>
#include "Game.h"

using namespace std;

int main() {

	//Create Guess object
	Guess guess;

	bool isStillPlaying = true;

	while (isStillPlaying)
	{
		/*Variables */
		int n; //Hold Integers
		int m; //Hold Range

		cout << "Guessing Game!\n";

		cout << "Enter the Number of Integers (n): ";
		cin >> n;

		cout << "Enter the Number of Each Integers from 1 to (m): ";
		cin >> m;

		//Calls beginGuessing Method from Guess class
		guess.beginGuessing(m, n);

		cout << "Play again?(Yes/No)";
		string again;
		cin >> again;


		if (again == "no" || again == "No" || again == "NO")
		{
			isStillPlaying = false; //Exits loop
		}

	}

	cout << "Good-bye!\n";

	//guess.~Guess();

	return 0;

}
