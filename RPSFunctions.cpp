// Source code file for Rock, Paper, Scissors

#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include "RPSFunctions.h"

using namespace std;

void playerRock(int& pWin, int& botChoice) // Player has picked 1
{
    chrono::duration <int, milli> timespan(2000);

    if (botChoice == 1)
    {
        cout << "The bot has picked: Rock\n";
        this_thread::sleep_for(timespan);
        cout << "This round ends in a tie.\n\n";
        this_thread::sleep_for(timespan);
    }
    else if (botChoice == 2)
    {
        cout << "The bot has picked: Paper\n";
        this_thread::sleep_for(timespan);
        cout << "The AI wins this round.\n\n";
        this_thread::sleep_for(timespan);
    }
    else // Rock beats scissors, player wins
    {
        cout << "The bot has picked: Scissors\n";
        this_thread::sleep_for(timespan);
        cout << "You win this round.\n\n";
        this_thread::sleep_for(timespan);
        pWin++;
    }
}

void playerPaper(int& pWin, int& botChoice) // Player has picked 2
{
    chrono::duration <int, milli> timespan(2000);

    if (botChoice == 1) // Paper beats rock, player wins
    {
        cout << "The bot has picked: Rock\n";
        this_thread::sleep_for(timespan);
        cout << "You win this round.\n\n";
        this_thread::sleep_for(timespan);
        pWin++;
    }
    else if (botChoice == 2)
    {
        cout << "The bot has picked: Paper\n";
        this_thread::sleep_for(timespan);
        cout << "This round ends in a tie.\n\n";
        this_thread::sleep_for(timespan);
    }
    else
    {
        cout << "The bot has picked: Scissors\n";
        this_thread::sleep_for(timespan);
        cout << "The AI wins this round.\n\n";
        this_thread::sleep_for(timespan);
    }
}

void playerScissors(int& pWin, int& botChoice) // Player has picked 3
{
    chrono::duration <int, milli> timespan(2000);

    if (botChoice == 1)
    {
        cout << "The bot has picked: Rock\n";
        this_thread::sleep_for(timespan);
        cout << "The AI wins this round.\n\n";
        this_thread::sleep_for(timespan);
    }
    else if (botChoice == 2) // Scissors beats paper, player wins
    {
        cout << "The bot has picked: Paper\n";
        this_thread::sleep_for(timespan);
        cout << "You win this round.\n\n";
        this_thread::sleep_for(timespan);
        pWin++;
    }
    else
    {
        cout << "The bot has picked: Scissors\n";
        this_thread::sleep_for(timespan);
        cout << "This round ends in a tie.\n\n";
        this_thread::sleep_for(timespan);
    }
}