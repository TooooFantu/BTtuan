#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "hangman_functions.h"
 using namespace std;

void intro()
{
     cout << "**************************************" << endl;
     cout << "*                                    *" << endl;
     cout << "* HANGMAN: THE BEST GAME OF ALL TIME *" << endl;
     cout << "*                                    *" << endl;
     cout << "**************************************" << endl;
     cout << endl << "  GUESS THE MANCHESTER UNITED PLAYER" << endl;
     cout << " (If you lose , a man will be hanged)" << endl << endl << endl;
}

void draw_hangman(int falure)
{
    if (falure == 0)
    {
        cout << endl;
        cout << "           +=====+" << endl;
        cout << "           |     |" << endl;
        cout << "                 |" << endl;
        cout << "                 |" << endl;
        cout << "                 |" << endl;
        cout << "                 |" << endl;
        cout << "                 |" << endl;
        cout << "                 +" << endl;
        cout << "      0==========0" << endl;
    }
    else if (falure < 3)
    {
        cout << endl;
        cout << "           +=====+" << endl;
        cout << "           |     |" << endl;
        cout << "           O     |" << endl;
        cout << "                 |" << endl;
        cout << "                 |" << endl;
        cout << "                 |" << endl;
        cout << "                 |" << endl;
        cout << "                 +" << endl;
        cout << "      0==========0" << endl;
    }
    else if (falure < 6)
    {
        cout << endl;
        cout << "           +=====+" << endl;
        cout << "           |     |" << endl;
        cout << "           O     |" << endl;
        cout << "          /|\\    |" << endl;
        cout << "                 |" << endl;
        cout << "                 |" << endl;
        cout << "                 |" << endl;
        cout << "                 +" << endl;
        cout << "      0==========0" << endl << endl;
    }
    else if (falure < 10)
    {
        cout << endl;
        cout << "           +=====+" << endl;
        cout << "           |     |" << endl;
        cout << "           O     |" << endl;
        cout << "          /|\\    |" << endl;
        cout << "           |     |" << endl;
        cout << "                 |" << endl;
        cout << "                 |" << endl;
        cout << "                 +" << endl;
        cout << "      0==========0" << endl << endl;
    }
}

void ingame_display(vector<char> wrong_answer, string answer)
{
    cout << "- Wrong answer (Max: 10): ";

    for (int i = 0; i < wrong_answer.size(); i++)
    {
        cout << wrong_answer[i] << ", ";
    }

    cout << endl << endl << "- X word (" << answer.length() << " letter): ";

    for (int i = 0; i < answer.length(); i++)
    {
        cout << answer[i] << " ";
    }

    cout << endl << endl;
}

void ending(string answer, string xword)
{
    if (answer == xword)
    {
        cout << "*************************" << endl;
        cout << "*                       *" << endl;
        cout << "*    CONGRATULATION!    *" << endl;
        cout << "*       You win!        *" << endl;
        cout << "*                       *" << endl;
        cout << "*************************" << endl;
    }
    else
    {
        cout << "***************************" << endl;
        cout << "*                         *" << endl;
        cout << "*   YOU'RE SUCH A LOSER   *" << endl;
        cout << "*        He's dead        *" << endl;
        cout << "*                         *" << endl;
        cout << "***************************" << endl;
        cout << endl;
        cout << "            +=====+" << endl;
        cout << "            |     |" << endl;
        cout << "            O     |" << endl;
        cout << "           /|\\    |" << endl;
        cout << "            |     |" << endl;
        cout << "          // \\   |" << endl;
        cout << "                  |" << endl;
        cout << "                  +" << endl;
        cout << "       0==========0" << endl;
    }
}
