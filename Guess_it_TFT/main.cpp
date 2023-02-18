#include <iostream>
#include <ctime>
#include "guess_it_functions.h"
 using namespace std;


int main()
{
    greeting();
    srand(time(NULL));

    int xnumber = rand() % 100 + 1;
    int answer = 0;
    int left;
    int right = 101;
    int failure = 0;

    cout << "0=======================================================0" << endl;

    while (failure < 7 && answer != xnumber)
    {
        cout << "| Failure (Max: 7): " << failure << ".                                  |" << endl;
        cout << "|                                                       |" << endl;
        number_range(xnumber, answer, &left, &right);
        cout << "|                                                       |" << endl;
        cout << "| Type your number: "; cin >> answer;
        cout << "|                                                       |" << endl;

        if (answer != xnumber)
        {
            cout << "| Sike that the wrong number!                           |" << endl;
            failure ++;
        }
        cout << "0=======================================================0" << endl;
    }
    ending(failure);
    return 0;
}
