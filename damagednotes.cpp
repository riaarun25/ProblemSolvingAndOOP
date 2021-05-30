#include <iostream>
#include <string>
using namespace std;

void damagednotes(int, int, int);

int main(){
    int rs2, rs5, rs10;
    cout << "Enter the number of Rs.2 notes: ";
    cin >> rs2;
    cout << "Enter the number of Rs.5 notes: ";
    cin >> rs5;
    cout << "Enter the number of Rs.10 notes: ";
    cin >> rs10;
    damagednotes(rs2, rs5, rs10);
    return 0;
}

void damagednotes(int rs2=0, int rs5=0, int rs10=0){
    int sum1 = rs2*2;
    int sum2 = rs5*5;
    int sum3 = rs10*10;
    int total_sum = (sum1-rs2) + (sum2-rs5) + (sum3-rs10);
    cout << "Amount to return = Rs." << total_sum << "/-" << endl;
}
