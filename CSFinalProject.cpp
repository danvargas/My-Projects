#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;


double coeff1;
double coeff2;
double coeff3;
double exponent1;
double exponent2;
double exponent3;
void derivative()

{
    string num_coeff;
    while (num_coeff != "4")
    {
        
        cout << "\n\nDerivative Menu: ";
        cout << "\n\nMonomial or polynomial?";
        cout << "\n 1. 1 coefficient";
        cout << "\n 2. 2 coefficients";
        cout << "\n 3. 3 coefficients";
        cout << "\n 4. Return to previous screen";
        cout << "\n\nEnter choice: ";
        cin >> num_coeff;
        
        if (num_coeff == "1")
        {
            cout << "\n\nEnter value of coefficient: ";
            cin >> coeff1;
            cout << "\nEnter value of exponent: ";
            cin >> exponent1;
            cout << "\n\nYou entered: ";
            cout << coeff1 << "x^" << exponent1;
            cout<< "\n\nYour derivative is: ";
            cout << exponent1 * coeff1 << "x^" << exponent1 - 1 << endl;
        }
        else if (num_coeff == "2")
        {
            cout << "\n\nEnter value of coefficient 1: ";
            cin >> coeff1;
            cout << "\nEnter value of exponent 1: ";
            cin >> exponent1;
            cout << "\n\nEnter value of coefficient 2: ";
            cin >> coeff2;
            cout << "\nEnter value of exponent 2: ";
            cin >> exponent2;
            cout << "\n\nYou entered: ";
            cout << coeff1 << "x^" << exponent1 << " + ";
            cout << coeff2 << "x^" << exponent2;
            cout << "\n\nYour derivative is: ";
            cout << exponent1 * coeff1 << "x^" << exponent1 - 1 << " + ";
            cout << exponent2 * coeff2 << "x^" << exponent2 - 1 << endl;
        }
        else if (num_coeff == "3")
        {
            cout << "\n\nEnter value of coefficient 1: ";
            cin >> coeff1;
            cout << "\nEnter value of exponent 1: ";
            cin >> exponent1;
            cout << "\n\nEnter value of coefficient 2: ";
            cin >> coeff2;
            cout << "\nEnter value of exponent 2: ";
            cin >> exponent2;
            cout << "\n\nEnter value of coefficient 3: ";
            cin >> coeff3;
            cout << "\nEnter value of exponent 3: ";
            cin >> exponent3;
            cout << "\n\nYou entered: ";
            cout << coeff1 << "x^" << exponent1 << " + ";
            cout << coeff2 << "x^" << exponent2 << " + ";
            cout << coeff3 << "x^" << exponent3;
            cout << "\n\nYour derivative is: ";
            cout << exponent1 * coeff1 << "x^" << exponent1 - 1 << " + ";
            cout << exponent2 * coeff2 << "x^" << exponent2 - 1 << " + ";
            cout << exponent3 * coeff3 << "x^" << exponent3 - 1 << endl;
        }
    }
    return;
}
void integral()
{
    string num_coeff2;
    cout.precision(10);
    while (num_coeff2 != "4")
    {
        
        cout << "\n\nIntegrals Menu: ";
        cout << "\n\nMonomial or polynomial?";
        cout << "\n 1. 1 coefficient";
        cout << "\n 2. 2 coefficients";
        cout << "\n 3. 3 coefficients";
        cout << "\n 4. Return to previous screen";
        cout << "\n\nEnter choice: ";
        cin >> num_coeff2;
        
        if (num_coeff2 == "1")
        {
            cout << "\n\nEnter value of coefficient: ";
            cin >> coeff1;
            cout << "\nEnter value of exponent: ";
            cin >> exponent1;
            cout << "\n\nYou entered: ";
            cout << coeff1 << "x^" << exponent1;
            cout << "\n\nYour integral is: (";
            cout << coeff1 << "/" << exponent1 + 1;
            cout << ")x^" << exponent1 + 1 << endl;
        }
        else if (num_coeff2 == "2")
        {
            cout << "\n\nEnter value of coefficient 1: ";
            cin >> coeff1;
            cout << "\nEnter value of exponent 1: ";
            cin >> exponent1;
            cout << "\n\nEnter value of coefficient 2: ";
            cin >> coeff2;
            cout << "\nEnter value of exponent 2: ";
            cin >> exponent2;
            cout << "\n\nYou entered: ";
            cout << coeff1 << "x^" << exponent1 << " + ";
            cout << coeff2 << "x^" << exponent2;
            cout << "\n\nYour integral is: (";
            cout << coeff1 << "/" << exponent1 + 1;
            cout << ")x^" << exponent1 + 1 << " + (";
            cout << coeff2 << "/" << exponent2 + 1;
            cout << ")x^" << exponent2 + 1 << endl;
        }
        else if (num_coeff2 == "3")
        {
            cout << "\n\nEnter value of coefficient 1: ";
            cin >> coeff1;
            cout << "\nEnter value of exponent 1: ";
            cin >> exponent1;
            cout << "\n\nEnter value of coefficient 2: ";
            cin >> coeff2;
            cout << "\nEnter value of exponent 2: ";
            cin >> exponent2;
            cout << "\n\nEnter value of coefficient 3: ";
            cin >> coeff3;
            cout << "\nEnter value of exponent 3: ";
            cin >> exponent3;
            cout << "\n\nYou entered: ";
            cout << coeff1 << "x^" << exponent1 << " + ";
            cout << coeff2 << "x^" << exponent2 << " + ";
            cout << coeff3 << "x^" << exponent3 ;
            cout << "\n\nYour integral is: (";
            cout << coeff1 << "/" << exponent1 + 1;
            cout << ")x^" << exponent1 + 1 << " + (";
            cout << coeff2 << "/" << exponent2 + 1;
            cout << ")x^" << exponent2 + 1 << " + (";
            cout << coeff3 << "/" << exponent3 + 1;
            cout << ")x^" << exponent3 + 1 << endl;
        }
    }
    return;
}
int main()
{
    string menu_choice;
    while (menu_choice != "3")
    {
        cout << "Menu:";
        cout << "\n\n 1. Derivative";
        cout << "\n 2. Integral" ;
        cout << "\n 3. Exit";
        cout << "\n\nEnter choice: ";
        cin >> menu_choice;
        
        if (menu_choice == "1")
        {
            derivative();
        }
        
        else if (menu_choice == "2")
        {
            integral();
        }
    }
    
    return 0;
}

