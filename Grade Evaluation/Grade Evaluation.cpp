#include <iostream>

using namespace std;

int main()
{
    double grade;

    cout << "Your grade: ";
    cin >> grade;

    if (grade < 60) {
        cout << grade << " is fail";
    }
    else if (grade >= 60 && grade <= 69) {
        cout << grade << " is passing";
    }
    else if (grade >= 70 && grade <= 89) {
        cout << grade << " is good";
    }
    else if (grade >= 90) {
        cout << grade << "is execellent";
    }

    return 0;
}