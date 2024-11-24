#include <iostream>
using namespace std;

int main() {
    double miles, kilometers, meters, centimeters, millimeters, micrometers;

    // Input distance in miles
    cout << "Enter the distance between SHU and your home in miles: ";
    cin >> miles;

    // Convert miles to kilometers, meters, centimeters, millimeters, micrometers
    kilometers = miles * 1.60934;       // 1 mile = 1.60934 kilometers
    meters = miles * 1609.34;           // 1 mile = 1609.34 meters
    centimeters = miles * 160934;       // 1 mile = 160934 centimeters
    millimeters = miles * 1609344;      // 1 mile = 1609344 millimeters
    micrometers = miles * 1609344000;   // 1 mile = 1609344000 micrometers

    // Output the results
    cout << "Distance in kilometers: " << kilometers << " km" << endl;
    cout << "Distance in meters: " << meters << " m" << endl;
    cout << "Distance in centimeters: " << centimeters << " cm" << endl;
    cout << "Distance in millimeters: " << millimeters << " mm" << endl;
    cout << "Distance in micrometers: " << micrometers << " µm" << endl;

    return 0;
}
