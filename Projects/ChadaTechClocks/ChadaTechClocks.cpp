// Author: Alysha Pursley
// Purpose: Displays a 12-hour and 24-hour clock with options to add an hour, minute, or second, or exit the program.
// CS210 Programming Languages 
// Project One: Chada Tech Clocks

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to display both clocks side by side with proper formatting
void displayClocks(int hour, int minute, int second) {
    // Calculate 12-hour format and AM/PM
    int hour12 = hour % 12;
    if (hour12 == 0) hour12 = 12;
    string ampm = (hour >= 12) ? "PM" : "AM";

    // Display clocks
    cout << "**************************    **************************" << endl;
    cout << "*     12-Hour Clock     *    *      24-Hour Clock     *" << endl;
    cout << "*     " << setw(2) << setfill('0') << hour12 << ":"
        << setw(2) << setfill('0') << minute << ":"
        << setw(2) << setfill('0') << second << " " << ampm
        << "     *    *      "
        << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << ":"
        << setw(2) << setfill('0') << second
        << "         *" << endl;
    cout << "**************************    **************************" << endl;
}

// Function to display the menu options for user selection
void displayMenu() {
    cout << "\n********************\n";
    cout << "* 1 - Add One Hour *\n";
    cout << "* 2 - Add One Minute *\n";
    cout << "* 3 - Add One Second *\n";
    cout << "* 4 - Exit Program *\n";
    cout << "********************\n";
    cout << "Enter your choice: ";
}

// Function to add one hour, ensuring rollover at 24
void addHour(int& hour) {
    hour = (hour + 1) % 24;
}

// Function to add one minute, rolling over to add hour if >= 60
void addMinute(int& hour, int& minute) {
    minute++;
    if (minute >= 60) {
        minute = 0;
        addHour(hour);
    }
}

// Function to add one second, rolling over to add minute and hour if needed
void addSecond(int& hour, int& minute, int& second) {
    second++;
    if (second >= 60) {
        second = 0;
        addMinute(hour, minute);
    }
}

int main() {
    // Initialize clock time variables
    int hour = 0, minute = 0, second = 0;
    int choice;

    // Main loop to display clocks and process user input continuously
    while (true) {
        // Clear the screen for updated display (Windows: cls, Mac/Linux: clear)
        system("cls");

        // Display both clocks
        displayClocks(hour, minute, second);

        // Display menu and get user choice
        displayMenu();
        cin >> choice;

        // Process user input
        switch (choice) {
        case 1:
            addHour(hour);
            break;
        case 2:
            addMinute(hour, minute);
            break;
        case 3:
            addSecond(hour, minute, second);
            break;
        case 4:
            cout << "Exiting program. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please select 1-4.\n";
            system("pause"); // Pause so user can read invalid message
        }
    }

    return 0;
}
