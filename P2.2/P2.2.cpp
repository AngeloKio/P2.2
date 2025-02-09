#include <iostream>
#include<string>
using namespace std;
int readPositiveNumber(string Message) {
	int num;
	do {
		cout << Message << endl;
		cin >> num;
		if (num <= 0) {
			cout << "Invalid input! Please enter a positive number.\n";
		}
	} while (num <= 0);
	return num;
}
bool PerfectNumber(int num) {
	int sum = 0;
	for (int i = 1;i < num;i++) {
		if (num % i == 0) {
			sum = sum + i;
		}
	}
	return num == sum;
}
void Message(int num) {
	if (PerfectNumber(num)) {
		cout <<num<< "is a perfect number";
	}
	else {
		cout <<num<< "is Not perfect number";
	}
}

int main()
{
	Message(readPositiveNumber("enter positive number"));
}