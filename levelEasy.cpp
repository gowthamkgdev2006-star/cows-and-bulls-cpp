#include<iostream>
#include<string>
#include<cstdlib>
#include<cctype>
using namespace std;

string secretWord;
int wordLength;

void clearScreen()
{
    system("cls");
}

void pauseScreen()
{
    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();
}
void player2()
{
    cout << "=======================================" << endl;
    cout << "           PLAYER 2 : GUESS WORD       " << endl;
    cout << "=======================================" << endl;
    for (int i = 0; i < wordLength; i++)
    {
        cout << "_ ";
    }
    cout <<"Guess the secret word: ";

    string guessWord;
    cin >> guessWord;
    cout <<  guessWord << endl;
}
void player1()
{
    while (true)
    {
        clearScreen();

        cout << "========================================" << endl;
        cout << "         PLAYER 1 : SECRET WORD         " << endl;
        cout << "========================================" << endl;
        cout << "Game Rules" << endl;
        cout << "----------" << endl;
        cout << "Only alphabet letters are allowed." << endl;
        cout << "No spaces or special characters." << endl;
        cout << "========================================" << endl;
        cout << "NOTE" << endl;
        cout << "----" << endl;
        cout << "Do not let Player 2 see the secret word!" << endl;
        cout << "========================================" << endl;

        cout << "\nCreate a secret word: ";
        cin >> secretWord;

        bool valid = true;

        for (int i = 0; i < secretWord.length(); i++)
        {   
            if (!isalpha(secretWord[i]))
            {
                valid = false;
                break;
            }

        // Convert every letter to uppercase
        secretWord[i] = toupper(secretWord[i]);
        }

            if (!valid)
            {
                cout << "\n========================================" << endl;
                cout << "Invalid Secret Word!" << endl;
                cout << "Please enter letters only." << endl;
                cout << "========================================" << endl;

                pauseScreen();
                continue;
            }

        wordLength = secretWord.length();

        clearScreen();

        cout << "========================================" << endl;
        cout << "Secret Word : " << secretWord << endl;
        cout << "Word Length : " << wordLength << endl;
        cout << "========================================" << endl;
        cout << "[C] Confirm" << endl;
        cout << "[E] Edit Word" << endl;
        cout << "[M] Main Menu" << endl;

        char choice;
        cin >> choice;

        if (choice == 'C' || choice == 'c')
        {
            clearScreen();
            player2();
            break;
        }
        else if (choice == 'E' || choice == 'e')
        {
            continue;      // Ask Player 1 to enter the word again
        }
        else if (choice == 'M' || choice == 'm')
        {
            clearScreen();
            return;        // Go back to the main menu
        }
        else
        {
            cout << "\nInvalid Choice!" << endl;
            pauseScreen();
        }
    }
}

void easyMenu()
{
    // Display Easy Level Menu
    cout << "=====================================" << endl;
    cout << "              EASY MODE              " << endl;
    cout << "=====================================" << endl;
    cout << "Welcome to Easy Mode!" << endl;
    cout << "Player 1 : Secret Word Creator" << endl;
    cout << "Player 2 : Word Finder" << endl <<endl;
    cout << "Game Features" << endl;
    cout << "-------------" << endl;
    cout << "✓ Unlimited Attempts" << endl;
    cout << "✓ Bulls and Cows shown for each letter" << endl <<endl;
    cout << "Controls" << endl;
    cout << "--------" << endl;
    cout << "[F] Continue  [D] Difficulty Menu  [M] Main Menu" << endl;
    char easyChoice; 
    cin >> easyChoice;
    if(easyChoice == 'F' || easyChoice == 'f')
    {
        clearScreen();
        player1();
    }

}


int main()
{
    easyMenu();
    return 0;
}
