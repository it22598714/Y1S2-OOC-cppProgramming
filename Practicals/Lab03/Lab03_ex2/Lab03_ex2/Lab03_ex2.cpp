#include <iostream>
#include <iomanip>
using namespace std;

struct marks
{
    int marks;
    float CA;
};

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2);

int main()
{
    marks st_details[5][2];

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Student " << i+1 << endl;
        for (size_t j = 0;  j < 2;  j++)
        {
            cout << "Enter marks for assignment " << j + 1 << " : ";
            cin >> st_details[i][j].marks;
        }
        findMarks(st_details[i][0].marks, st_details[i][1].marks, st_details[i][0].CA, st_details[i][1].CA);
        cout << endl;
    }

    cout << setw(10) << "Student" << setw(10) << "Marks1" << setw(10) << "Marks2" << setw(10) << setiosflags(ios::fixed) << setprecision(2) << "CA_1" << setw(10) << setiosflags(ios::fixed) << setprecision(2) << "CA_2" << endl;

    for (size_t i = 0; i < 5; i++)
    {
        cout << setw(10) << i + 1 << setw(10) << st_details[i][0].marks << setw(10) << st_details[i][1].marks << setw(10) << st_details[i][0].CA << setw(10) << st_details[i][1].CA << endl;
    }

    return 0;
}

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2)
{
    t_CA1 = t_marks1 * 20 / 100.0;
    t_CA2 = t_marks2 * 30 / 100.0;
}