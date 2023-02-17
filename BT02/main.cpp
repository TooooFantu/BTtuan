#include <iostream>
#include "BT02_functions.h"
 using namespace std;
const int mom = 1500000;

int main()
{
    int month = 9;
    int year = 2023;
    greet();
    int borrowed, money, hour;
    cout << "Nhap so tien muon vay: "; cin >> borrowed;

    while (borrowed < 0 || borrowed > 100000000)
    {
        cout << "Vui long nhap lai: ";
        cin >> borrowed;
    }
    cout << "====================================================" << endl;
    cout << "Thang 8/2023:" << endl << endl;
    cout << "So du no thang truoc (Lai ngan hang: 0VND): 0VND." << endl;
    cout << "Thu nhap: 0VND." << endl;
    cout << "So du no thang nay: " << borrowed << "VND." << endl << endl;
    cout << "====================================================" << endl;

    while (1)
    {
        cout << "Thang " << month << "/" << year << ":" << endl << endl;
        month++;
        monthy(&month, &year);
        cout << "So du no thang truoc (Lai ngan hang: " << debt(borrowed);
        borrowed += debt(borrowed);
        cout << "VND):" << borrowed << "VND." << endl;

        cout << endl << "Nhap so gio lam: "; cin >> hour;

        while (hour < 0 || hour > 250)
        {
            cout << "Lam on nhap lai: "; cin >> hour;
        }

        money = income(hour);
        int fee = 0;
        fee = money*0.09;
        fee += duty_fee(money*0.91);
        int tmp = (1500000 + money) - fee;
        cout << endl << "Thu nhap truoc thue: " << money << "VND." << endl;
        cout << "Tong thue phai chiu: " << fee << "VND." << endl;
        cout << "Thu nhap sau thue + tien tro cap: " << tmp << "VND." << endl;
        borrowed = max(0,borrowed - tmp);
        cout << "So du no sau khi thanh toan: " << borrowed << "VND." << endl << endl;
        cout << "=============================================================" << endl;

        if (borrowed == 0)
        {
            cout << endl << "CHUC MUNG BAN DA THANH TOAN HET KHOAN NO!" << endl << endl;
            break;
        }
    }
    return 0;
}
