#include <iostream>
#include <string> 
using namespace std;
int main() {
    const string predefinedPassword = "1234"; 
    string userInput; 
    int maxAttempts = 3; 
    cout << "You have " << maxAttempts << " attempts to enter the correct password.\n";
    for (int attempt = 1; attempt <= maxAttempts; ++attempt) {
        cout << "Attempt " << attempt << ": Enter your password: ";
        cin >> userInput;
        if (userInput == predefinedPassword) {
            cout << "Access granted\n";
            break; 
        } else {
            cout << "Incorrect password.\n";
            if (attempt == maxAttempts) {
                cout << "Access denied. All attempts used.\n";
            }
        }
    }
    return 0;
}