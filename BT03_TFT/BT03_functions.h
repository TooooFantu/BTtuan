#include <iostream>
#include <iomanip>
 using namespace std;

void greet();

void screen_status(string name, double amount, double price, double money, double *save);

double value(double amount, double price);

bool enough(double money, double amount[], double price[], int list_size);

void buy_pri_or_amo(string name[], double money, double amount[], double price[], int list_size, bool che_ex, double *init);

void sl_sort(double *header, double *follow, string *followed, int arr_size);
