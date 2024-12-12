#include <iostream>
using namespace std;

const int MAX_PATIENTS = 100;
int patientIDs[MAX_PATIENTS];
string patientNames[MAX_PATIENTS];
int patientCount = 0;

void addPatient() {
    if (patientCount >= MAX_PATIENTS) {
        cout << "Cannot add more patients. Maximum limit reached.\n";
        return;
    }

    cout << "Enter Patient ID: ";
    cin >> patientIDs[patientCount];
    cout << "Enter Patient Name: ";
    cin >> patientNames[patientCount];
    patientCount++;
    cout << "Patient added successfully!\n";
}

void displayPatients() {
    if (patientCount == 0) {
        cout << "No patients to display.\n";
        return;
    }

    cout << "\nList of Patients:\n";
    for (int i = 0; i < patientCount; i++) {
        cout << "ID: " << patientIDs[i] << ", Name: " << patientNames[i] << "\n";
    }
}

void searchPatient() {
    if (patientCount == 0) {
        cout << "No patients to search.\n";
        return;
    }

    int searchID;
    cout << "Enter Patient ID to search: ";
    cin >> searchID;

    for (int i = 0; i < patientCount; i++) {
        if (patientIDs[i] == searchID) {
            cout << "Patient Found - ID: " << patientIDs[i] << ", Name: " << patientNames[i] << "\n";
            return;
        }
    }

    cout << "Patient with ID " << searchID << " not found.\n";
}

void deletePatient() {
    if (patientCount == 0) {
        cout << "No patients to delete.\n";
        return;
    }

    int deleteID;
    cout << "Enter Patient ID to delete: ";
    cin >> deleteID;

    for (int i = 0; i < patientCount; i++) {
        if (patientIDs[i] == deleteID) {
            for (int j = i; j < patientCount - 1; j++) {
                patientIDs[j] = patientIDs[j + 1];
                patientNames[j] = patientNames[j + 1];
            }
            patientCount--;
            cout << "Patient with ID " << deleteID << " deleted successfully!\n";
            return;
        }
    }

    cout << "Patient with ID " << deleteID << " not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\nHospital Management System\n";
        cout << "1. Add Patient\n";
        cout << "2. Display Patients\n";
        cout << "3. Search Patient\n";
        cout << "4. Delete Patient\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addPatient();
            break;
        case 2:
            displayPatients();
            break;
        case 3:
            searchPatient();
            break;
        case 4:
            deletePatient();
            break;
        case 5:
            cout << "Exiting system. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}