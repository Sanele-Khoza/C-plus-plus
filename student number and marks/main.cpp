#include <iostream>

using namespace std;

void student();

int main()
{
    student();
}

void student()
{
    int stno, grade;

    cout << "enter student no" << endl;
    cin >> stno;
    cout << "grade" << endl;
    cin >> grade;

    if (grade > 39)
    {
        cout << stno << endl;
        cout << "Pass" << endl;
    }

}

