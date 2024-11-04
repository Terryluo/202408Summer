#pragma once 
#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include "random_number.h"
using namespace std;

int randomNumber() 
{
	srand((unsigned int)time(NULL)); // seed random number according to time
	int randomNum = rand() % 100 + 1; // create a random number range from 1 to 100, without + 1 is from [0, 99];
	int val;
	while (1) {
		cout << "please enter the number you guest" << endl;
		cin >> val;
		if (val > randomNum) {
			cout << "your number is too big, , guest again!" << endl;
		}
		else if (val < randomNum) {
			cout << "your number is too small, guest again!" << endl;
		}
		else {
			cout << "you get the correct one. Excellent!" << endl;
			break;
		}
	}
	cout << "The random number is: " << randomNum << endl;

	return randomNum;
}