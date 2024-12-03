#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
    } else {
        cout << "Reverse Number Pattern:\n";
        for (int i = n; i >= 1; --i) {
    
            for (int j = i; j >= 1; --j) {
                cout << j << " ";
            }
            cout << endl; 
        }
    }
    return 0;
}