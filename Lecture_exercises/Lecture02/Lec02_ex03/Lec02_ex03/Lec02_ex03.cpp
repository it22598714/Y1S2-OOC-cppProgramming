#include <iostream>
using namespace std;

int main()
{
	double total, discount;

	cout << "Enter the total price : ";
	cin >> total;

	if (total > 10000)
	{
		discount = total * 25 / 100;
	}
	else if (total > 5000)
	{
		discount = total * 15 / 100;
	}
	else if (total > 3000)
	{
		discount = total * 10 / 100;
	}
	else
	{
		discount = 0;
	}

	cout << "Discount = " << discount;

	return 0;
}

