
#include <iostream>
#include <cctype>      // <- needed for toupper()
using namespace std;

int main() 
{
    const int BASE = 32;
    const float CONVERSION_FACTOR = 9.0 / 5.0;

    double temp;
    string scaleChoice;

    cout << "Enter temperature: ";
    cin >> temp;

    cout << "Is your temperature in Celsius (C) or Fahrenheit (F): ";
    cin >> scaleChoice;

    // Convert first character to uppercase
    char scale = toupper(scaleChoice[0]);

    if (scale == 'C') {
        cout << temp << "C is " 
             << (temp * CONVERSION_FACTOR + BASE) << "F" << endl;

    } else if (scale == 'F') {
        cout << temp << "F is " 
             << ((temp - BASE) / CONVERSION_FACTOR) << "C" << endl;

    } else {
        cout << "You did not enter C or F!" << endl;
        return 1;
    }

    return 0;
}