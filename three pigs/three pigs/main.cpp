#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>
#include "random_number.h"
#include "narcissistic_number.h"
using namespace std;

int main()
{
	//int num = randomNumber();
	//cout << num << endl;
	vector<string> narcissisticNumbers = narcissisticNumber();
	printOutNumbers(narcissisticNumbers);

	return 0;
}