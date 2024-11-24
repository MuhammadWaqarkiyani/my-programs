#include <iostream>
using namespace std;

// Function to calculate GPA based on percentage
double calculateGPA(double percentage) {
    if (percentage >= 90) {
        return 4.0; // A grade
    } else if (percentage >= 80) {
        return 3.7; // B+ grade
    } else if (percentage >= 70) {
        return 3.0; // B grade
    } else if (percentage >= 60) {
        return 2.7; // C+ grade
    } else if (percentage >= 50) {
        return 2.0; // C grade
    } else if (percentage >= 40) {
        return 1.7; // D grade
    } else {
        return 0.0; // F grade
    }
}

// Function to determine the grade based on percentage
char determineGrade(double percentage) {
    if (percentage >= 90) {
        return 'A'; 
    } else if (percentage >= 80) {
        return 'B'; 
    } else if (percentage >= 70) {
        return 'C'; 
    } else if (percentage >= 60) {
        return 'D'; 
    } else {
        return 'F'; 
    }
}

int main() {
    double marks[5], total = 0, percentage, GPA;
    char grade;

    // Input marks for 5 subjects
    cout << "Enter the marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    // Calculate percentage
    percentage = (total / 500.0) * 100;

    // Calculate GPA
    GPA = calculateGPA(percentage);

    // Determine grade
    grade = determineGrade(percentage);

    // Output results
    cout << "\nTotal Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "GPA: " << GPA << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
