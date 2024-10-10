#include <iostream>

using namespace std;

int main() {
    int number, maxm = 30, sum = 0;

    cout << "Even Numbers between 10 and 30" << " = " << endl;
    for (number = 2; number <= maxm; number += 2) {
        sum += number;
        cout << number << " "<< endl;
    }

    cout << "The Sum of All Even Numbers up to " << maxm << " = " << sum << endl;
    return 0;
}
