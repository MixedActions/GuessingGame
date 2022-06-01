#pragma once

#ifndef GAME
#define GAME

#include<iostream>

class Guess {
public:

	//No-args constructor
	Guess() {
		//Sets variables to null
		randomNumbersGenerated = NULL;
		randomNumbersFound = NULL;
	}

	/*Methods Declaration*/
	void beginGuessing(int m, int n);
	void generateRandomNumber(int m, int n);


	/*Private Variables*/
private:
	int* randomNumbersGenerated;
	int* randomNumbersFound;
}; //End Guess Class



#endif // !GAME
