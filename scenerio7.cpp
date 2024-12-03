#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number <= 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
    } else {
        cout << "Divisors of " << number << " are: ";
        for (int i = 1; i <= number; ++i) {
            if (number % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
?
