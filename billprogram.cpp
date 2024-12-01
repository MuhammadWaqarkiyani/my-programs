#include <iostream>
using namespace std;

int main() {
    int numItems = 0;
    double price, totalBill = 0;

    // Ask the user how many items they want to add
    cout << "Enter the number of items you want to add: ";
    cin >> numItems;

    // Loop for entering the price of each item
    for (int i = 1; i <= numItems; ++i) {
        cout << "Enter the price of item " << i << ": ";
        cin >> price;

        // If the price is negative, skip this entry
        if (price < 0) {
            cout << "Negative price entered. Skipping this item.\n";
            continue; // Skip the rest of the loop and continue with the next item
        }

        // If the price is 0, stop the loop
        if (price == 0) {
            cout << "Price is 0. Stopping the input.\n";
            break; // Exit the loop
        }

        // Add the price to the total bill
        totalBill += price;
    }

    // Display the total bill
    cout << "Total bill: $" << totalBill << endl;

    return 0;
}
