#include <iostream>
#include "BT02_functions.h"
 using namespace std;

void greet()
{
    cout << "     ==============================" << endl;
    cout << "     |      HUSTER SIMULATOR      |" << endl;
    cout << "     ==============================" << endl;
    cout << endl << "Ban se vao vai mot sinh vien HUST." << endl;
    cout << "Ban can mot so tien de mua laptop." << endl;
    cout << "Hang thang ban se duoc tro cap tu bo me 1tr500k." << endl;
    cout << "Ban can nhap so tien muon vay va so gio lam them hang thang." << endl;
    cout << "Toi se tinh thoi gian de ban tra het no!" << endl;
    cout << "Chi tiet cac loai thue thu nhap ban phai nop:" << endl;
    cout << " + 9% bao hiem (khong tinh vao thu nhap tinh thue)." << endl;
    cout << " + Thu nhap moi thang      |       Muc thue phai chiu " << endl;
    cout << " 1.000.000vnd dau tien     |               0%" << endl;
    cout << "  500.000vnd tiep theo     |               10%" << endl;
    cout << "  500.000vnd tiep theo     |               15%" << endl;
    cout << "    tiep theo              |               20%" << endl;
    cout << "=========================================================================" << endl;
}

void monthy(int *month, int *year)
{
    if (*month > 12)
    {
        *year += 1;
        *month = 1;
    }
}

int income(int hour)
{
    int tmp = 0;
    int money[3] = {12000, 16000, 20000};
    int times[3] = {100, 50, 50};

    for (int i = 0; i < 3; i++)
    {
        if (hour >= times[i])
        {
            tmp += times[i]*money[i];
            hour -= times[i];
        }
        else
        {
            tmp += hour*money[i];
            return tmp;
        }
    }

    tmp += hour*25000;
    return tmp;
}

int duty_fee(int money)
{
    int tmp = 0;
    int revenue[3] = {1000000, 500000, 500000};
    float fee[3] = {0, 0.1, 0.15};

    for (int i = 0; i < 3; i++)
    {
        if (money >= revenue[i])
        {
            tmp += revenue[i]*fee[i];
            money -= revenue[i];
        }
        else
        {
            tmp += money*fee[i];
            return tmp;
        }
    }
    tmp += money*(0.2);
    return tmp;
}

int debt(int borrowed)
{
    int init = borrowed;
    init *= 0.02;
    return init;
}

void paying_bill(int money, int borrowed)
{

}
