#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a structure for representing a hotel room
struct Room {
    int number;
    bool occupied;
};

// Define a structure for representing a guest
struct Guest {
    string name;
    int roomNumber;
    int numPersons;
};

// Define the price per person
const int pricePerPerson = 100;

// Function to display the main menu
void displayMenu() {
    cout << "\n===== Hotel Management System =====\n";
    cout << "1. Add Guest\n";
    cout << "2. Check In\n";
    cout << "3. Check Out\n";
    cout << "4. View All Rooms\n";
    cout << "5. Exit\n";
    cout << "====================================\n";
    cout << "Enter your choice: ";
}

// Function to add a new guest
void addGuest(vector<Guest> &guests) {
    string name;
    int numPersons;

    cout << "Enter guest name: ";
    cin >> name;

    cout << "Enter number of persons: ";
    cin >> numPersons;

    guests.push_back({name, 0, numPersons});
    cout << "Guest added successfully!\n";
}

// Function to check in a guest
void checkIn(vector<Room> &rooms, vector<Guest> &guests) {
    int roomNumber;

    cout << "Enter room number: ";
    cin >> roomNumber;

    if (roomNumber < 1 || roomNumber > rooms.size()) {
        cout << "Invalid room number!\n";
        return;
    }

    if (rooms[roomNumber - 1].occupied) {
        cout << "Room already occupied!\n";
        return;
    }

    int guestIndex;
    cout << "Enter guest index (from 'View All Guests' option): ";
    cin >> guestIndex;

    if (guestIndex < 0 || guestIndex >= guests.size()) {
        cout << "Invalid guest index!\n";
        return;
    }

    rooms[roomNumber - 1].occupied = true;
    guests[guestIndex].roomNumber = roomNumber;
    cout << "Check-in successful!\n";
}

// Function to check out a guest
void checkOut(vector<Room> &rooms, vector<Guest> &guests) {
    int roomNumber;

    cout << "Enter room number to check out: ";
    cin >> roomNumber;

    if (roomNumber < 1 || roomNumber > rooms.size()) {
        cout << "Invalid room number!\n";
        return;
    }

    bool found = false;
    for (size_t i = 0; i < guests.size(); ++i) {
        if (guests[i].roomNumber == roomNumber) {
            int totalPrice = guests[i].numPersons * pricePerPerson;
            cout << "Guest: " << guests[i].name << "\n";
            cout << "Room Number: " << roomNumber << "\n";
            cout << "Total Price: $" << totalPrice << "\n";
            guests.erase(guests.begin() + i);
            rooms[roomNumber - 1].occupied = false;
            cout << "Check-out successful!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "No guest found in room " << roomNumber << "!\n";
}

// Function to display all rooms and their occupancy status
void viewAllRooms(const vector<Room> &rooms) {
    cout << "\n===== Room Status =====\n";
    for (size_t i = 0; i < rooms.size(); ++i) {
        cout << "Room " << rooms[i].number << ": ";
        if (rooms[i].occupied)
            cout << "Occupied\n";
        else
            cout << "Available\n";
    }
}

// Function to display all guests
void viewAllGuests(const vector<Guest> &guests) {
    cout << "\n===== All Guests =====\n";
    for (size_t i = 0; i < guests.size(); ++i) {
        cout << "Guest " << i << ": " << guests[i].name << " (Room " << guests[i].roomNumber << ")\n";
    }
}

int main() {
    // Initialize rooms
    const int numRooms = 10; // Change this value according to your hotel
    vector<Room> rooms(numRooms);
    for (int i = 0; i < numRooms; ++i) {
        rooms[i].number = i + 1;
        rooms[i].occupied = false;
    }

    vector<Guest> guests;

    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addGuest(guests);
                break;
            case 2:
                checkIn(rooms, guests);
                break;
            case 3:
                checkOut(rooms, guests);
                break;
            case 4:
                viewAllRooms(rooms);
                break;
            case 5:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}

