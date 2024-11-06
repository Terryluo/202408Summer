#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>
#include "random_number.h"
#include "narcissistic_number.h"
#include "knock_the_desck.h"
#include "find_can_be_sorted.h"

using namespace std;

int main()
{
	//int num = randomNumber();
	//cout << num << endl;
	//vector<string> narcissisticNumbers = narcissisticNumber();
	//printOutNumbers(narcissisticNumbers);


	//knockTheDesk();

	vector<int> num = { 8,4,2,30,15 };
	bool result = canSortArray(num);
	cout << result << endl;

	return 0;
}