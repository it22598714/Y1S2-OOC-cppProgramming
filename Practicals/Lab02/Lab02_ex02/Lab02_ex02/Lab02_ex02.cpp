#include <iostream>
using namespace std;

struct Rectangle
{
	int length;
	int width;
}yard, house;

float area(int t_length, int t_width);

int main()
{
	cout << "Enter the length of the yard :";
	cin >> yard.length;

	cout << "Enter the width of the yard :";
	cin >> yard.width;

	cout << endl << "Enter the length of the house :";
	cin >> house.length;

	cout << "Enter the width of the house :";
	cin >> house.width;

	cout << "Lawn area : " << area(yard.length, yard.width) - area(house.length, house.width);

	return 0;;
}

float area(int t_length, int t_width)
{
	return t_length * t_width;
}
