#include <iostream>
#include <iomanip>
#include "BT03_functions.h"
 using namespace std;


void greet()
{
    cout << "===================================================" << endl;
    cout << "|       CHAO MUNG BAN DEN VOI SIEU THI BK         |" << endl;
    cout << "===================================================" << endl;
    cout << "|  Ten mat hang   |    Don vi    |      Gia       |" << endl;
    cout << "|     Banh quy    |     Goi      |   15.000Vnd    |" << endl;
    cout << "|     Com chay    |     Goi      |   35.000Vnd    |" << endl;
    cout << "|     Hoa hong    |     Bong     |   10.000Vnd    |" << endl;
    cout << "|     Xa phong    |     Tui      |   44.000Vnd    |" << endl;
    cout << "|     Chocopie    |     Hop      |   60.000vnd    |" << endl;
    cout << "|     Gao thom    |     Bao      |   13.000vnd    |" << endl;
    cout << "|     Vai lanh    |     Tam      |   20.000Vnd    |" << endl;
    cout << "===================================================" << endl;
}

//hien thi sl, tong gia tri cua tung mat hang
void screen_status(string name, double amount, double price, double money, double *save)
{
    cout << name << "     " << price << "         ";
    int tmp = money/price;

    tmp = min((int)amount, tmp);

    cout << tmp << "          " << value(tmp, price) << "Vnd";
    (*save) += value(tmp, price);
}

double value(double amount, double price)
{
    return (amount * price);
}

//kiem tra co mua dc tat ca mat hang khong
bool enough(double money, double amount[], double price[], int list_size)
{
    double tmp = 0;

    for (int i = 0; i < list_size; i++)
    {
        tmp += value (amount[i], price[i]);
    }

    if (money > tmp)  return true;

    return false;
}

void sl_sort(double *header, double *follow, string *followed, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < arr_size; j++)
        {
            if (header[j] < header[min_pos])
            {
                min_pos = j;
            }
        }
        swap(header[i], header[min_pos]);
        swap(follow[i], follow[min_pos]);
        swap(followed[i], followed[min_pos]);
    }
}

void buy_pri_or_amo(string name[], double money, double amount[], double price[], int list_size, bool che_ex, double *init)
{
    bool check = false;

    if (che_ex)
    {
        sl_sort(price, amount, name, list_size);
    }
    else
    {
        sl_sort(amount, price, name, list_size);
    }
    double save = 0;

    for (int i = 0; i < list_size; i++)
    {
        if (money < value(amount[i], price[i]))  check = true;

        screen_status(name[i], amount[i], price[i], money, &save);
        cout << endl;

        money = money - value(amount[i], price[i]);
        *init = save;

        if (check)  break;
    }
}
