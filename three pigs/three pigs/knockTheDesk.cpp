#include <iostream>
#include "knock_the_desck.h"
using namespace std;

void knockTheDesk() {
	for (int i = 1; i <= 100; ++i) {
		int firstDigit = i % 10;
		int secondDigit = i / 10;
		if (firstDigit == 7 || secondDigit == 7 || i % 7 == 0) {
			cout << "Knock, Knock!!! The number is: " << i << endl;
		}
	}
}