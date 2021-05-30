#include <iostream>
using namespace std;

void regular(float basic, float hra, float da){
    float gp1 = basic+hra+((da/100)*basic);
    cout << "Gross pay is Rs." << gp1;
}

void dailywages(float wph, float hrs){
    float gp2 = wph*hrs;
    cout << "Gross pay is Rs." << gp2;
}

int main(){
    int ch;
    float basic, hra, da, wph, hrs, gp1, gp2;
    cout << "Choose type of employee: \n1.Regular\n2.Daily Wage\n3.Consolidated\nEnter 1, 2 or 3: ";
    cin >> ch;
    switch(ch){
        case 1:
        cout << "Enter basic pay: ";
        cin >> basic;
        cout << "Enter House Rent Allowance: ";
        cin >> hra;
        cout << "Enter Dearness Allowance: ";
        cin >> da;
        regular(basic, hra, da);
        break;
        case 2:
        cout << "Enter wage per hour: ";
        cin >> wph;
        cout << "Enter number of hours worked: ";
        cin >> hrs;
        dailywages(wph, hrs);
        break;
        case 3:
        cout << "Gross pay is Rs.25,000/-";
        break;
        default:
        cout << "Invalid choice"; 
        break;
    }
    return 0;
}
