#include <iostream>
using namespace std;

int main() {
    int age;
    char hasMoney;
    double amount;
    cout << "How old are you? ";
    cin >> age;

    if (age >= 18){
        cout << "Do you have money? [Y/N] ";
        cin >> hasMoney;

        if (hasMoney == 'Y' || hasMoney == 'y'){
            cout << "how much money do you have? " << endl;
            cin >> amount;

            if (amount > 1300.0){
                cout << "iPhone is yours";

            }else if (amount < 1300.0 and amount >= 800.0){
                cout << "Choose from our not-0Pro models";

            } else {
                cout << "How dare you come here!";

            }
        }else{
            cout << "Borrow it";

        }
    }else {
        cout << "Get the hell out of here";
    }
    // wryfguec
    

    return 0;
}
