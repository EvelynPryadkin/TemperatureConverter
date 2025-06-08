#include <iostream>
#include <cctype>
using namespace std;

double FtoC(double fahrenheit)
{
    return 5.0 / 9.0 * (fahrenheit - 32);
}

double CtoF(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}

int main()
{
    char choice;
    double input;

    cout << "Convert from (F)ahrenheit to Celsius or (C)elsius to Fahrenheit: ";
    cin >> choice;
    choice = static_cast<char>(toupper(choice));


    while (choice != 'F' && choice != 'C') {
        cerr << "Invalid choice. Please enter 'F' or 'C': ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> choice;
        choice = static_cast<char>(toupper(choice));
    }

    cout << "Enter the temperature to convert: ";
    while (!(cin >> input)) {
        cerr << "Invalid input. Please enter a numeric value: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    if (choice == 'F') {
        cout << "Fahrenheit to Celsius: " << FtoC(input) << "°C" << endl;
    } else {
        cout << "Celsius to Fahrenheit: " << CtoF(input) << "°F" << endl;
    }

    return 0;
}