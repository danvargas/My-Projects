#include <iostream>
using namespace std;

int main()
{
	char ch;
	float voltage , current , resistance , result;
	cout << "Ohm's Law:";
	cout << "\nChoose from the menu which part of Ohm's Law you would like to calculate:\n";
	cout << "\n1. Calculate voltage.\n";
	cout << "2. Calculate resistance.\n";
	cout << "3. Calculate current.\n";
	cout << "\n!Any other input will cancel the program! \n";
    
	cin >> ch;
	switch(ch)
	{
        case '1' :
			cout << "Enter the current in amps:\n";
			cin >> current;
			cout << "Enter the resistance in ohms:\n";
			cin >> resistance;
			result = current * resistance;
			cout << "The voltage in volts:\n"<< result;
			break;
        case '2' :
            cout << "Enter the voltage in volts.\n";
			cin >> voltage;
			cout << "Enter the current in amps.\n";
			cin >> current;
			result = voltage / current;
			cout << "The resistance in ohms:\n" << result;
			break;
        case '3' :
			cout << "Enter the voltage in volts:\n";
			cin >> voltage;
			cout << "Enter the resistance in ohms:\n";
			cin >> resistance;
			result = voltage / resistance;
			cout << "The current in amps:\n" << result;
			break;
        default :
			return 0;
			cin.get();
	}
	return 0;
}
