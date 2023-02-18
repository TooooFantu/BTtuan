#include <iostream>
#include <iomanip>
#include "BT03_functions.h"
 using namespace std;


int main()
{
    greet();
    cout << endl;
    double money;

    string name[7] = {"Banh quy","Com chay","Hoa hong","Xa phong","Chocopie","Gao thom","Vai lanh"};
    string genre[7] = {"Goi","Goi","Bong","Tui","Hop","Bao","Tam"};

    double price[7] = {15000, 35000, 10000, 44000, 60000, 13000, 20000};
    double amount[7];

    cout << "==> Nhap so tien ban mang theo nguoi (Vnd): "; cin >> money;

    while (money < 0)
    {
        cout << "Ban ngheo vay thi dung vao sieu thi BK!" << endl;
        cout << "Vui long nhap lai: "; cin >> money;
    }

    while (money > 100000000 || money < 0)
    {
        cout << "Nhan vien co the duoi ban ra ngoai!" << endl;
        cout << "Vui long nhap dung: "; cin >> money;
    }
    cout << "______________________________________" << endl;
    cout << "==> Nhap so luong cac mat hang ban muon mua: " << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << " " << name[i] << " (" << genre[i] << "): ";
        cin >> amount[i];
    }
    cout << "______________________________________" << endl;

    double tong = 0;

    if (enough(money, amount, price, 7))
    {
        cout << "==> Ban du tien de mua tat ca nhung gi da chon!" << endl;
        cout << "________________________________________________" << endl;
        cout << "==> Nhung gi ban da mua:" << endl;
        cout << endl;
        cout << "   Ten     Gia/Donvi    So luong   Thanh tien" << endl;

        for (int i = 0; i < 7; i++)
        {
            double tmp = 0;
            screen_status(name[i], amount[i], price[i], money, &tmp);
            tong = tong + tmp;
            cout << endl;
        }

        cout << endl << "   Tong:                              " << fixed << setprecision(0) << tong << "Vnd." << endl;
        cout << "   Tien thua:                         " << money - tong << "Vnd" << endl;
    }
    else
    {
        bool che_ex;
        cout << "==> Ban khong du tien de mua tat ca nhung gi da chon!" << endl;
        cout << "    Vui long lua chon mot trong hai cach mua hang: " << endl;
        cout << "        1. Mua cac mat hang co gia thap nhat (Nhap: 1)." << endl;
        cout << "        2. Mua tat ca cac mat hang co so luong it nhat (Nhap: 0)." << endl;
        cout << "==> Nhap lua chon cua ban: "; cin >> che_ex;
        cout << "__________________________________________________________________" << endl;
        cout << "==> Nhung gi ban da mua: " << endl;
        cout << endl;
        cout << "   Ten     Gia/Donvi    So luong   Thanh tien" << endl;
        buy_pri_or_amo(name, money, amount, price, 7, che_ex, &tong);
        cout << endl;
        cout << "   Tong:                              " << fixed << setprecision(0) << tong << "Vnd" << endl;
        cout << "   Tien thua:                         " << money - tong << "Vnd" << endl;
    }
    return 0;
}

