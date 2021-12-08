// -Main Function- Understanding header and source code files through rock, paper, scissors

#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include "RPSFunctions.h" // The contents of the file will replace this line

using namespace std;

int main()
{
    srand(time(0));
    chrono::duration <int, milli> timespan(3000);
    int playerChoice;
    int botChoice;
    int win = 0;
    int* pWin = &win;

    cout << "Welcome to the Rock, Paper, Scissors program.\n";
    this_thread::sleep_for(timespan);
    cout << "The program will end once you have beat the AI three times.\n";
    this_thread::sleep_for(timespan);
    cout << "Don't worry about losses or ties.\n";
    this_thread::sleep_for(timespan);
    cout << "Our bot friend here just enjoys the company.\n\n";
    this_thread::sleep_for(timespan);

    do
    {
        botChoice = rand() % 3 + 1; // AI picks 1-3

        cout << "Wins: " << win << "\n\n";
        cout << "1 -> Rock\n";
        cout << "2 -> Paper\n";
        cout << "3 -> Scissors\n\n";
        cout << "Your input: ";
        cin >> playerChoice;
        cout << endl;

        if (playerChoice == 1) // Player picks rock
        {
            cout << "You have secretly picked: Rock\n\n";
            this_thread::sleep_for(timespan);
            cout << "The AI is deciding...\n\n";
            this_thread::sleep_for(timespan);
            playerRock(win, botChoice); // Passed in a pointer to win so that it can be changed in the main from multiple points in the function
                                        // And passed in botChoice to get the pseudo-randomness of the AI's choice to the functions
        }
        else if (playerChoice == 2) // Player picks paper
        {
            cout << "You have secretly picked: Paper\n\n";
            this_thread::sleep_for(timespan);
            cout << "The AI is deciding...\n\n";
            this_thread::sleep_for(timespan);
            playerPaper(win, botChoice);
        }
        else if (playerChoice == 3) // Player picks scissors
        {
            cout << "You have secretly picked: Scissors\n\n";
            this_thread::sleep_for(timespan);
            cout << "The AI is deciding...\n\n";
            this_thread::sleep_for(timespan);
            playerScissors(win, botChoice);
        }
        else
        {
            cout << "Input 1, 2, or 3 please. You're making the AI sad.\n\n";
            this_thread::sleep_for(timespan);
            cin.clear();
            cin.ignore(1);
        }
    } while (win < 3);

    cout << "Congrats, you've beat the AI three times.\n";
    this_thread::sleep_for(timespan);
    cout << "Our bot friend says thanks, for playing with em.\n";
    this_thread::sleep_for(timespan);
}