#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
	int n, r;
	std::cout << "Enter a value for n ";
	std::cin >> n;
	std::cout << "Enter a value for r ";
	std::cin >> r;
	std::cout << "nCr = ";
	std::cout << nCr(n, r);
	std::cout << std::endl;

	return 0;
}

long Factorial(int no) {
	long fac{ 1 };

	for (int i{ no }; i >= 1; i--) {
		fac *= i;
	}

	return fac;
}

long nCr(int n, int r) {
	return Factorial(n) / (Factorial(r) * Factorial(n - r));
}
