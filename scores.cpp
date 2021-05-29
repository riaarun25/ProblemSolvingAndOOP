#include <iostream>
using namespace std;

int main()
{
    int arra[5], arrb[5], arrc[5], n1, i1, sum1 = 0, n2, i2, sum2 = 0, n3, i3, sum3 = 0;
    cout << "\nEnter the number of tests given: ";
    cin >> n1;
    cout << "Enter the scores of A: ";
    for (i1 = 0; i1 < n1; i1++)
    cin >> arra[i1];
    for (i1 = 0; i1 < n1; i1++)
    {
        sum1 += arra[i1];
    }
    cout << "Total score of A = " << sum1;
    
    cout << "\n\nEnter the number of tests given: ";
    cin >> n2;
    cout << "Enter the scores of B: ";
    for (i2 = 0; i2 < n2; i2++)
    cin >> arrb[i2];
    for (i2 = 0; i2 < n2; i2++)
    {
        sum2 += arrb[i2];
    }
    cout << "Total score of B = " << sum2;

    
    cout << "\n\nEnter the number of tests given: ";
    cin >> n3;
    cout << "Enter the scores of C: ";
    for (i3 = 0; i3 < n3; i3++)
    cin >> arrc[i3];
    for (i3 = 0; i3 < n3; i3++)
    {
        sum3 += arrc[i3];
    }
    cout << "Total score of C = " << sum3 << "\n"<< endl;
    
    if(sum1 > sum2 && sum2 > sum3){
        cout << "1st - A\n2nd - B\n3rd - C";
    }
    else if(sum1 > sum3 && sum3 > sum2){
        cout << "1st - A\n2nd - C\n3rd - B";
    }
    else if(sum2 > sum3 && sum3 > sum1){
        cout << "1st - B\n2nd - C\n3rd - A";
    }
    else if(sum2 > sum1 && sum1 > sum3){
        cout << "1st - B\n2nd - A\n3rd - C";
    }
    else if(sum3 > sum1 && sum1 > sum2){
        cout << "1st - C\n2nd - A\n3rd - B";
    }
    else if(sum3 > sum2 && sum2 > sum1){
        cout << "1st - C\n2nd - B\n3rd - A";
    }
    else{
        cout << "Two students have the same total score so rank can't be confirmed";
    }
    return 0;
}
