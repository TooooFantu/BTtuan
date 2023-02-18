#include <iostream>
#include <ctime>
#include "guess_it_functions.h"
 using namespace std;

void greeting()
{
    cout << "     O==================O" << endl;
    cout << "     |                  |" << endl;
    cout << "     |     GUESS IT     |" << endl;
    cout << "     |                  |" << endl;
    cout << "     O==================O" << endl;
    cout << endl;
}

void number_range(int xnumber, int answer, int *left, int *right)
{
    if (answer < xnumber)
    {
        *left = answer;
    }
    else
    {
        *right = answer;
    }
    cout << "| Guide: You should choose a number between " << *left << " and " << *right << "!" << endl;
}

void ending(int failure)
{
    cout << "|                                                       |" << endl;
    if (failure == 6)
    {
    cout << "|                       FAILURE!                        |" << endl;
    }
    else
    {
    cout << "|        -I'm so pround of you- Your Asian Mom          |" << endl;
    }
    cout << "|                                                       |" << endl;
    cout << "0=======================================================0";
}
