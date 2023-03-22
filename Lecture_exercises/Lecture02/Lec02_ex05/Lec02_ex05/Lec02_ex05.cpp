#include <iostream>
using namespace std;

int main()
{
	double total{ 0 }, discount{ 0 };

	for (size_t i = 0; i < 3; i++)
	{
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

		cout << "Discount = " << discount << endl;
	}
	

	return 0;
}

