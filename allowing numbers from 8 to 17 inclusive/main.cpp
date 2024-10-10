#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number between 8 and 17:\n ";
    cin >> num;


    if (num >= 8 && num <= 17) {
        cout << "You entered a number within range " << num << endl;

    } else {
        cout << "Please enter a number between 8 and 17." << endl;
    }

    return 0;
}
