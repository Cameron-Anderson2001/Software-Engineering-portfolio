#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <Windows.h>


class SlotMachine {
public:
    // Constructor to initialize the slot machine with a seed and starting balance
    SlotMachine() {
        srand(static_cast<unsigned>(time(0))); // Seed the random number generator
        balance = 1000; // Initial balance
    }

    // Main function to start and manage the slot machine game
    void play() {
        std::cout << "Welcome to the Slot Machine Game!\n";
        std::cout << "Your current balance: $" << balance << "\n\n";

        while (balance > 0) {
            std::cout << "Press 'Enter' to spin the slot machine. Type 'exit' to leave.\n";
            std::string input;
            std::getline(std::cin, input);

            if (input == "exit") {
                std::cout << "Exiting the game. Your final balance: $" << balance << "\n";
                break;
            }

            spin();
            displayResults();
        }

        std::cout << "Thank you for playing!\n";
    }

private:
    int balance; // Player's balance

    // Function to simulate spinning the slot machine
    void spin() {
        std::cout << "Spinning...\n";
        int result1 = rand() % 3 + 1;
        int result2 = rand() % 3 + 1;
        int result3 = rand() % 3 + 1;

        std::cout << "Results: " << result1 << " " << result2 << " " << result3 << "\n";

        if (result1 == result2 && result2 == result3) {
            std::cout << "Congratulations! You won $100!\n";
            balance += 100;
        }
        else {
            std::cout << "Sorry, you lost $10.\n";
            balance -= 10;
        }

        std::cout << "Your current balance: $" << balance << "\n\n";
    }

    // Function to display game results and prompt for the next move
    void displayResults() {
        if (balance <= 0) {
            std::cout << "Sorry, you are out of money. Game over.\n";
        }
        else {
            std::cout << "Press 'Enter' to spin again or type 'exit' to leave.\n";
        }
    }
};

// Main function to create an instance of the SlotMachine class and start the game
int main() {
    SlotMachine slotMachine;
    slotMachine.play();

    return 0;
}