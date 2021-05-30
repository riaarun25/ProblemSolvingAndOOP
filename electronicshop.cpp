#include <iostream>
using namespace std;

void cost(int lap, int charger, int headset, int harddisk, int pendrive, int total=0){
    total = (lap*35000)+(charger*1500)+(headset*250)+(harddisk*4000)+(pendrive*800);
    cout << "Total = " << total;
}

int main(){
    int lap, charger, headset, harddisk, pendrive, total;
    cout << "***Enter the number of items bought***\nHp Laptop: ";
    cin >> lap;
    cout << "Hp Charger: ";
    cin >> charger;
    cout << "Hp Headset: ";
    cin >> headset;
    cout << "Hp Hard disk 1TB: ";
    cin >> harddisk;
    cout << "Hp Pendrive 16GB: ";
    cin >> pendrive;
    cost(lap, charger, headset, harddisk, pendrive, total);
    return 0;
}
