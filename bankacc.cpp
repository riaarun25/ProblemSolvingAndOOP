#include <iostream>
#include <string>
using namespace std;

void createaccount(float);

int main()
{
    string name;
    double num;
    float money;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your account number: ";
    cin >> num;
    cout << "Enter deposit amount: ";
    cin >> money;
    createaccount(money);
    return 0;
}


void createaccount(float money){
    if(money >= 1000){
        cout << "\nSuccessful!";
    }
    else{
        cout << "\nFailed! Deposit should be minimum Rs.1000";
    }
}
