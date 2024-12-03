#include <iostream>
using namespace std;
int main() {
    int choice;          
    double num1, num2;   
    do {
    
        cout << "\n--- Simple Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Please select an operation (1-5): ";
        cin >> choice;
        switch (choice) {
            case 1: // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << "\n";
                break;
            case 2: // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << "\n";
                break;
            case 3: // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << "\n";
                break;
            case 4: // Division
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed.\n";
                } else {
                    cout << "Result: " << num1 / num2 << "\n";
                }
                break;
            case 5: // Exit
                cout << "Exiting the calculator. Goodbye!\n";
                break;
            default: // Invalid choice
                cout << "Invalid choice. Please select a valid option.\n";
        }
    } while (choice != 5); 
    return 0;
}