#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;


void mainMenu()
{
    cout << "=====================================" << endl;
    cout << "         COWS🐄 AND BULLS🐂         " << endl;
    cout << "=====================================" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. Instructions" << endl;
    cout << "3. Exit" << endl;
}


int main()
{
    
    mainMenu();
    
    int choice;
    cin >> choice;
    switch (choice)
    {
        case 1:
            // Start Game
            break;
        case 2:
            // Display Instructions
            cout << "================================= " << endl;
            cout << "            HOW TO PLAY           " << endl;
            cout << "================================= " << endl;
            cout << "• This game requires 2 players." << endl;
            cout << "• Player 1 enters a secret word." << endl;
            cout << "• Player 2 guesses the word." << endl;
            cout << "• 🐂Bull = Correct letter in the correct position." << endl;
            cout << "• 🐄Cow = Correct letter in the wrong position." << endl;
            cout << "Example"  << endl;
            cout << "Secret : GAME" << endl;
            cout << "Guess  : GATE" << endl;
            cout << "Result : 1 Bull, 2 Cows" << endl;
            cout << "Press F to return to the Main Menu..." << endl;
            char returnChoice;
            cin >> returnChoice;
            if (returnChoice == 'F' || returnChoice == 'f')
            {
                // Return to Main Menu
                mainMenu();
            }
            break;
        case 3:
            // Exit
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

}
