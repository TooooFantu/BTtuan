#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "hangman_functions.h"
 using namespace std;

int main()
{
    srand(time(NULL));
    intro();

    string xwordlist[7] = {"marcusrashford","garnacho","harrymaguire","brunofernandes","mctominay","lukeshaw","daviddegea"};
    string xword;
    string answer;

    xword = xwordlist[rand()%7];

    for (int i = 0; i < xword.length(); i++)
    {
        answer += "_";
    }

    vector<char> wrong_answer;
    int falure = 0;
    bool check = false;
    char letter;

    while (answer != xword && falure < 10)
    {
        draw_hangman(falure);
        ingame_display(wrong_answer, answer);

        cout << "Type your letter: ";
        cin >> letter;

        for (int i = 0; i < xword.length(); i++)
        {
            if (letter == xword[i])
            {
                answer[i] = letter;
                check = true;
            }
        }

        if (check)
        {
            cout << endl << "Status: CORRECT" << endl;
        }
        else
        {
            cout << endl << "Status: INCORRECT" << endl;
            if (falure == 9)
            {
                break;
            }
            cout << "Warning: Don't let he die!" << endl;
            wrong_answer.push_back(letter);
            falure++;
        }
        check = false;
    }
    ending(answer, xword);
    return 0;
}
