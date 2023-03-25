#include <iostream>

using namespace std;

int main()
{
	int no{0};
	long fac{1};

	cout << "Enter a Number : ";
	cin >> no;

	for (int i{ no }; i >= 1; i--) {
		fac *= i;
	}

	cout << "Factorial of " << no << " is " << fac;

	return 0;
}