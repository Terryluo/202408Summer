#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "narcissistic_number.h"
using namespace std;


vector<string> narcissisticNumber() {
	vector<string> result;
	int num = 100;
	do {
		int curr = num;
		int firstDigit = curr % 10;
		curr /= 10;
		int secondDigit = curr % 10;
		curr /= 10;
		int thirdDigit = curr % 10;
		int calculate = pow(firstDigit, 3) + pow(secondDigit, 3) + pow(thirdDigit, 3);
		if (calculate == num) {
			result.push_back(to_string(num));
		}
		num++;
	} while (num < 1000);
	return result;
}

void printOutNumbers(vector<string>& narcissisticNumber) {
	for (const auto& num : narcissisticNumber) {
		cout << num << endl;
	}
}
