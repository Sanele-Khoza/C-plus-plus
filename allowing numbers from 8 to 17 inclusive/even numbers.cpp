#include <iostream>
using namespace std;

int main() {
    int number, maximum, sum = 0;

    cout << "\nPlease Enter the Maximum Limit for Even Numbers: ";
    cin >> maximum;

    cout << "\nEven Numbers between 0 and " << maximum << " = ";
    for (number = 2; number <= maximum; number += 2) {
        sum += number;
        cout << number << " ";
    }

    cout << "\nThe Sum of All Even Numbers up to " << maximum << " = " << sum;
    return 0;
}
