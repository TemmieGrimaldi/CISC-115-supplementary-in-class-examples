#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "what is your age?: ";
    cin >> age;

    if (age >= 18)
        cout << "you can vote!" << endl;
    else 
        cout << "you cannOT vote... :(" << endl;



    return 0;
}