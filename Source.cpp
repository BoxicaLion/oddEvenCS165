/*
Radu Enachi

+int reminder(int);
+bool oddEven(int);

*/

#include <iostream>
#include <string>

bool oddEven(int x);



int main() {

	int userInputX = 0;

	std::printf("Please choice a number for x : \n");
	scanf_s("%d", &userInputX);

	int theFlag = int(oddEven(userInputX));


	std::printf("The number << x = %d >> is %s \n", userInputX, (theFlag == 1) ? "not even" : "even");

	return 0;
}

int reminder(int x) {
	int y = 2;
	return x % y;
}

bool oddEven(int x) {

	bool theFlag = true;

	if (!reminder(x) == 1) {
		theFlag = false;
	}

	return theFlag;
}