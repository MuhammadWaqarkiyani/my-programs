#include <iostream>
using namespace std;

int main() {
    int choice;
    double totalBill = 0.0;

    // Do-while loop to display menu repeatedly
    do {
        // Display the menu
        cout << "\nCafeteria Menu: \n";
        cout << "1. Tea - $2\n";
        cout << "2. Coffee - $3\n";
        cout << "3. Sandwich - $5\n";
        cout << "4. Burger - $7\n";
        cout << "5. Exit\n";
        cout << "Please choose an item (1-5): ";

        // Read user choice
        cin >> choice;

        // Switch statement to handle different choices
        switch(choice) {
            case 1:
                totalBill += 2; // Tea
                cout << "You ordered Tea. Total bill: $" << totalBill << endl;
                break;
            case 2:
                totalBill += 3; // Coffee
                cout << "You ordered Coffee. Total bill: $" << totalBill << endl;
                break;
            case 3:
                totalBill += 5; // Sandwich
                cout << "You ordered Sandwich. Total bill: $" << totalBill << endl;
                break;
            case 4:
                totalBill += 7; // Burger
                cout << "You ordered Burger. Total bill: $" << totalBill << endl;
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please choose a valid option (1-5)." << endl;
                break;
        }
    } while (choice != 5); // Loop will continue until the user selects "Exit"

    // Final total bill after exiting the loop
    cout << "\nYour total bill is: $" << totalBill << endl;

    return 0;
}
