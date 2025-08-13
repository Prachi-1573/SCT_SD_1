#include <iostream>
using namespace std;

int main() {
    double temp;
    int choice;

    cout << "Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit & Kelvin\n";
    cout << "2. Fahrenheit to Celsius & Kelvin\n";
    cout << "3. Kelvin to Celsius & Fahrenheit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    switch (choice) {
        case 1:
            cout << "Fahrenheit: " << (temp * 9/5) + 32 << endl;
            cout << "Kelvin: " << temp + 273.15 << endl;
            break;
        case 2:
            cout << "Celsius: " << (temp - 32) * 5/9 << endl;
            cout << "Kelvin: " << (temp - 32) * 5/9 + 273.15 << endl;
            break;
        case 3:
            cout << "Celsius: " << temp - 273.15 << endl;
            cout << "Fahrenheit: " << (temp - 273.15) * 9/5 + 32 << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
