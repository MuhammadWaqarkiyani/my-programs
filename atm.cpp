#include <iostream>
using namespace std;

int main() {
    double balance = 1000.00; // Starting balance
    int choice;
    double amount;

    do {
        // Display the menu
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch(choice) {
            case 1: // Check Balance
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 2: // Withdraw Money
                cout << "Enter the amount to withdraw: $";
                cin >> amount;

                // Check if withdrawal amount is valid
                if (amount > 0 && amount <= balance) {
                    balance -= amount; // Deduct amount from balance
                    cout << "You have successfully withdrawn $" << amount << endl;
                    cout << "Your new balance is: $" << balance << endl;
                } else if (amount <= 0) {
                    cout << "Please enter a valid amount greater than 0." << endl;
                } else {
                    cout << "Insufficient balance for this withdrawal!" << endl;
                }
                break;

            case 3: // Deposit Money
                cout << "Enter the amount to deposit: $";
                cin >> amount;

                // Check if deposit amount is valid
                if (amount > 0) {
                    balance += amount; // Add amount to balance
                    cout << "You have successfully deposited $" << amount << endl;
                    cout << "Your new balance is: $" << balance << endl;
                } else {
                    cout << "Please enter a valid deposit amount greater than 0." << endl;
                }
                break;

            case 4: // Exit
                cout << "Exiting the ATM. Thank you for using our service!" << endl;
                break;

            default: // Invalid choice
                cout << "Invalid choice! Please select an option from 1 to 4." << endl;
                break;
        }

    } while (choice != 4); // Continue until user selects "Exit"

    return 0;
}
