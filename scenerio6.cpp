#include <iostream>
using namespace std;
int main() {
    int marks;
    char choice;
    do {
        
        cout << "Enter the student's marks (0-100): ";
        cin >> marks;
       
        if (marks < 0 || marks > 100) {
            cout << "Invalid marks. Please enter a value between 0 and 100.\n";
        } else {
            
            if (marks >= 90 && marks <= 100) {
                cout << "Grade: A\n";
            } else if (marks >= 80) {
                cout << "Grade: B\n";
            } else if (marks >= 70) {
                cout << "Grade: C\n";
            } else if (marks >= 60) {
                cout << "Grade: D\n";
            } else {
                cout << "Grade: F\n";
            }
        }
       
        cout << "Do you want to calculate another grade? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y'); 
    cout << "Exiting the Grade Calculator. Goodbye!\n";
    return 0;
}