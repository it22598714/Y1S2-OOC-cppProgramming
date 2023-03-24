#include <iostream>
using namespace std;

int numbers[10];
int searchKey(int s_num);
void findMax();

int main()
{
    for (size_t i = 0; i < 10; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> numbers[i];
    }

    int searchNumber;
    cout << "Enter a number for search : ";
    cin >> searchNumber;

    cout << "index of the searched number is : " << searchKey(searchNumber) << endl;

    findMax();
    return 0;
}

int searchKey(int s_num)
{
    int index{-1};
    for (size_t i = 0; i < 10; i++)
    {
        if (s_num == numbers[i])
        {
            index = i;
            break;
        }
    }
    return index;
}


void findMax()
{
    int max{ 0 };
    for (size_t i = 0; i < 10; i++)
    {
        if (numbers[i]>max)
        {
            max = numbers[i];
        }
    }
    cout << "maximum number is : " << max;
}