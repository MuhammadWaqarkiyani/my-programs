#include <iostream>
using namespace std;

int main() {
    int choice;
    double total = 0;

    do {
        cout << "Cafeteria Menu:\n"
             << "1. Tea - $2\n"
             << "2. Coffee - $3\n"
             << "3. Sandwich - $5\n"
             << "4. Burger - $7\n"
             << "5. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: total += 2; break;
            case 2: total += 3; break;
            case 3: total += 5; break;
            case 4: total += 7; break;
            case 5: break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    cout << "Total bill: $" << total << endl;
    return 0;
}