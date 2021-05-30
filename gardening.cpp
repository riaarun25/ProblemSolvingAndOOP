#include <iostream>
using namespace std;

void plants(int p, int s, int n){
    int total = p + ((n/2)*s);
    cout << "There will be " << total << " plants on the field.";
}

int main(){
    int p, s, n;
    cout << "Enter the number of plants: ";
    cin >> p;
    cout << "Enetr the number of seeds: ";
    cin >> s; 
    cout << "Enter the number of days: ";
    cin >> n;
    plants(p, s, n);
    return 0;
}
