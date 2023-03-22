#include <iostream>
using namespace std;

int main()
{
	int num{ 1000 };

	//using while loop
	while (num>=100)
	{
		cout << num << "  ";
		num -= 100;
	}
	cout << endl;

	//using do while loop
	num = 1000;
	do
	{
		cout << num << "  ";
		num -= 100;
	} while (num>=100);
	cout << endl;

	//using for loop
	for (num = 1000; num >=100; num-=100)
	{
		cout << num << "  ";
	}

	return 0;
}