#include <iostream>
#include <math.h>
using namespace std;

double coef1;
double coef2;
double coef3;
double expo1;
double expo2;
double expo3;
void integral()
{
    string coef;
    cout.precision(10);
    while (coef != "2")
    {
        cout << "\n\nIntegrals Menu: ";
        cout << "\n 1. Press to start your Integral";
        cout << "\n 2. Return to previous screen";
        cout << "\n\nEnter choice: ";
        cin >> coef;
        
        if (coef == "1")
        {
            cout << "\n\nEnter value of coefficient: ";
            cin >> coef1;
            cout << "\nEnter value of exponent: ";
            cin >> expo1;
            cout << "\n\nYou entered: ";
            cout << coef1 << "x^" << expo1;
            cout << "\n\nYour integral is: (";
            cout << coef1 << "/" << expo1 + 1;
            cout << ")x^" << expo1 + 1 << endl;
        }
        else if (coef == "2")
            
            return;
    }
}
int main()
{
    string menu;
    while (menu != "2")
    {
        cout << "Menu:";
        cout << "\n\n 1. Integral" ;
        cout << "\n 2. Exit";
        cout << "\n\nEnter choice: ";
        cin >> menu;
        
        if (menu == "1")
        {
            integral();
        }
        else if (menu == "2")
            return 0;
    }
}
