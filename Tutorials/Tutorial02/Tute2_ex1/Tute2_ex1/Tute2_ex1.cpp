#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a length in cm : ";
    float cm;
    cin >> cm;

    float inches;
    inches = cm / 2.54;

    cout << "Length in inches is :" << inches << " inches\n";

    return 0;
}
