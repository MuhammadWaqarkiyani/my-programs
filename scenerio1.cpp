#include <iostream>
using namespace std;
int main() {
    int choice;
    double totalBill = 0;
    do {
        cout << "\n--- Cafeteria Menu ---\n";
        cout << "1. Tea - $2\n";
        cout << "2. Coffee - $3\n";
        cout << "3. Sandwich - $5\n";
        cout << "4. Burger - $7\n";
        cout << "5. Exit\n";
        cout << "Please enter your choice (1-5): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                totalBill += 2; 
                cout << "You ordered Tea. $2 added to your bill.\n";
                break;
            case 2:
                totalBill += 3;
                cout << "You ordered Coffee. $3 added to your bill.\n";
                break;
            case 3:
                totalBill += 5;
                cout << "You ordered Sandwich. $5 added to your bill.\n";
                break;
            case 4:
                totalBill += 7; 
                cout << "You ordered Burger. $7 added to your bill.\n";
                break;
            case 5:
                cout << "Exiting the menu...\n";
                break; 
            default:
                cout << "Invalid choice. Please select a valid option.\n";
        }
    } while (choice != 5); 
    cout << "Your total bill is: $" << totalBill << "\n";
    cout << "Thank you for visiting our cafeteria!\n";
    return 0;
}