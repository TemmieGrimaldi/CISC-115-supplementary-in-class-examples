#include <iostream>
using namespace std;

int main() {
    // Prompt user for the temperature in Fahrenheit and output "It's freezing!" if the temperature is below 32 degrees.
    int temperature;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temperature;

    if (temperature <= 32)
        cout << "It's freezing!!!!!!!!!!!" << endl;
    else
        cout << "it's not freezing... :(" << endl;
    

    return 0;
}