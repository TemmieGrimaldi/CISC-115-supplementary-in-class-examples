#include <iostream>
using namespace std;

int main() {
    // Write a programthat takes a temperature (int) and a string corresponding to the weather condition (e.g., "sunny", "rainy", "cloudy").
    // The program should output the following:
    //   * If the weather is "rainy" and the temperature is below 50, output "Stay inside"
    //   * If the weather is "rainy" and the temperature is at least 50, output "Bring an umbrella"
    //   * If it is not "rainy", output "Enjoy the day"
    int temp;
    string weather;
    cout << "temperature and weather?: ";
    cin >> temp >> weather;

    if (weather =="rainy"){
        if (temp >= 50){
            cout << "Bring an umbrella" << endl;}
        else{
            cout << "Stay inside" << endl;}
    }
    else if(temp >= 32){
        cout << "Enjoy the day!" << endl;}
    else{
        cout << "stay warm!" << endl;
    }
    return 0;
}