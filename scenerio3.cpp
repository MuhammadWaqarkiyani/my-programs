#include <iostream>
using namespace std;
int main() {
    int number;        
    int oddCount = 0;  
    int evenCount = 0; 
    cout << "Enter numbers (enter 0 to stop):\n";
    while (true) {
        cout << "Enter a number: ";
        cin >> number;
        if (number == 0) {
            break; 
        }
        if (number % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++;  
        }
    }
    cout << "\nTotal even numbers: " << evenCount << "\n";
    cout << "Total odd numbers: " << oddCount << "\n";
    return 0;
}