// Redo_Class_Activity_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


const string suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
const string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };


void dealCard();

int main() {

    char choice;
    do {
        dealCard();
        cout << "\nWould you like to draw another card? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for playing! Goodbye!" << endl;
    return 0;
}

void dealCard() {
    srand(time(0)); 
    int suitIndex = rand() % 4;   // Random suit (0-3)
    int rankIndex = rand() % 13;  // Random rank (0-12)

    cout << "\n==================================\n";
    cout << "        Casino Card Dealer       \n";
    cout << "==================================\n";
    cout << " You have drawn: " << ranks[rankIndex] << " of " << suits[suitIndex] << endl;
    cout << "==================================\n";
}