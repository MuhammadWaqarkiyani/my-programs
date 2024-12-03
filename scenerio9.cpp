#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
    } else {
        cout << setw(6) << "Number" << setw(8) << "Square" << setw(8) << "Cube\n";
        cout << "----------------------------\n";
        for (int i = 1; i <= n; ++i) {
            cout << setw(6) << i << setw(8) << i * i << setw(8) << i * i * i << "\n";
        }
    }
    return 0;
}