#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arra[15], arrb[15], arrc[15], n1, i1, sum1 = 0, n2, i2, sum2 = 0, n3, i3, sum3 = 0;
    string studname1, studname2, studname3;
// Student 1
    cout << "\n\t\t\tENTER ALL TEST SCORES FROM 1 TO 5 ONLY" << endl; 
    cout << "\nEnter the name of first student: ";
    cin >> studname1;
    cout << "Enter the number of tests given: ";
    cin >> n1;
    cout << "Enter the scores of " << studname1 << ": ";
    for (i1 = 0; i1 < n1; i1++)
    cin >> arra[i1];
    for (i1 = 0; i1 < n1; i1++)
    {
        sum1 += arra[i1];
    }
    
// Student 2
    cout << "\n\nEnter the name of second student: ";
    cin >> studname2;
    cout << "Enter the number of tests given: ";
    cin >> n2;
    cout << "Enter the scores of " << studname2 << ": ";
    for (i2 = 0; i2 < n2; i2++)
    cin >> arrb[i2];
    for (i2 = 0; i2 < n2; i2++)
    {
        sum2 += arrb[i2];
    }

// Student 3  
    cout << "\n\nEnter the name of third student: ";
    cin >> studname3;
    cout << "Enter the number of tests given: ";
    cin >> n3;
    cout << "Enter the scores of " << studname3 << ": ";
    for (i3 = 0; i3 < n3; i3++)
    cin >> arrc[i3];
    for (i3 = 0; i3 < n3; i3++)
    {
        sum3 += arrc[i3];
    }
    
    cout << "*** SCORE TABLES ***" << endl;
    cout << " ______________________________________" << endl;
    cout << "| Semester 1 | Semester 2 | Semester 3 |"<< endl;
    cout << "|     "<< arra[0] << "      "<< "|" << "     "<< arra[5] << "      " << "|" << "     "<< arra[10] << "      " << "|" << endl;
    cout << "|     "<< arra[1] << "      "<< "|" << "     "<< arra[6] << "      " << "|" << "     "<< arra[11] << "      " << "|" << endl;
    cout << "|     "<< arra[2] << "      "<< "|" << "     "<< arra[7] << "      " << "|" << "     "<< arra[12] << "      " << "|" << endl;
    cout << "|     "<< arra[3] << "      "<< "|" << "     "<< arra[8] << "      " << "|" << "     "<< arra[13] << "      " << "|" << endl;
    cout << "|     "<< arra[4] << "      "<< "|" << "     "<< arra[9] << "      " << "|" << "     "<< arra[14] << "      " << "|" << endl;
    cout << " ______________________________________" << endl;
    cout << "Total score of " << studname1 << " is " << sum1 << "\n\n"; 
    
    cout << " ______________________________________" << endl;
    cout << "| Semester 1 | Semester 2 | Semester 3 |"<< endl;
    cout << "|     "<< arrb[0] << "      "<< "|" << "     "<< arrb[5] << "      " << "|" << "     "<< arrb[10] << "      " << "|" << endl;
    cout << "|     "<< arrb[1] << "      "<< "|" << "     "<< arrb[6] << "      " << "|" << "     "<< arrb[11] << "      " << "|" << endl;
    cout << "|     "<< arrb[2] << "      "<< "|" << "     "<< arrb[7] << "      " << "|" << "     "<< arrb[12] << "      " << "|" << endl;
    cout << "|     "<< arrb[3] << "      "<< "|" << "     "<< arrb[8] << "      " << "|" << "     "<< arrb[13] << "      " << "|" << endl;
    cout << "|     "<< arrb[4] << "      "<< "|" << "     "<< arrb[9] << "      " << "|" << "     "<< arrb[14] << "      " << "|" << endl;
    cout << " ______________________________________" << endl;
    cout << "Total score of " << studname2 << " is " << sum2 << "\n\n";
    
    cout << " ______________________________________" << endl;
    cout << "| Semester 1 | Semester 2 | Semester 3 |"<< endl;
    cout << "|     "<< arrc[0] << "      "<< "|" << "     "<< arrc[5] << "      " << "|" << "     "<< arrc[10] << "      " << "|" << endl;
    cout << "|     "<< arrc[1] << "      "<< "|" << "     "<< arrc[6] << "      " << "|" << "     "<< arrc[11] << "      " << "|" << endl;
    cout << "|     "<< arrc[2] << "      "<< "|" << "     "<< arrc[7] << "      " << "|" << "     "<< arrc[12] << "      " << "|" << endl;
    cout << "|     "<< arrc[3] << "      "<< "|" << "     "<< arrc[8] << "      " << "|" << "     "<< arrc[13] << "      " << "|" << endl;
    cout << "|     "<< arrc[4] << "      "<< "|" << "     "<< arrc[9] << "      " << "|" << "     "<< arrc[14] << "      " << "|" << endl;
    cout << " ______________________________________" << endl;
    cout << "Total score of " << studname3 << " is " << sum3 << "\n\n"; 
    
    if(sum1 > sum2 && sum2 > sum3){
        cout << "*** FINAL RESULTS ***\n1st - "<< studname1 << "\t2nd - " << studname2 << "\t3rd - " << studname3;
    }
    else if(sum1 > sum3 && sum3 > sum2){
        cout << "*** FINAL RESULTS ***\n1st - "<< studname1 << "\t2nd - " << studname3 << "\t3rd - " << studname2;
    }
    else if(sum2 > sum3 && sum3 > sum1){
        cout << "*** FINAL RESULTS ***\n1st - "<< studname2 << "\t2nd - " << studname3 << "\t3rd - " << studname1;
    }
    else if(sum2 > sum1 && sum1 > sum3){
        cout << "*** FINAL RESULTS ***\n1st - "<< studname2 << "\t2nd - " << studname1 << "\t3rd - " << studname3;
    }
    else if(sum3 > sum1 && sum1 > sum2){
        cout << "*** FINAL RESULTS ***\n1st - "<< studname3 << "\t2nd - " << studname1 << "\t3rd - " << studname2;
    }
    else if(sum3 > sum2 && sum2 > sum1){
        cout << "*** FINAL RESULTS ***\n1st - "<< studname3 << "\t2nd - " << studname2 << "\t3rd - " << studname1;
    }
    else{
        cout << "Two students have the same total score so rank can't be confirmed";
    }
    return 0;
}
