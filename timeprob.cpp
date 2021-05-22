#include <iostream>
using namespace std;

typedef struct
{
    int hr;
    int min;
    int sec;
}
void get(UD_time&);
void print(UD_time);
UD_time add (UD_time, int);

int main(){
    UD_timet1, t2;
    int min;
    get t1;
    cin >> min;
    t2 = add(t1, min);
    print(t2);
    return 0;
}
 
void get(UD_time& t)
{
    cin >> t.hr >> t.min >> t.sec;
}

void print(UD_time t)
{
    cout << t.hr << endl << t.min << endl << t.sec << endl;
}

UD_time add(UD_time t1, int m)
{
    UD_time hr;
    int hr;
    t2.sec = t1.sec;
    t2.min = t1.min;
    t2.hr = t1.hr;
    
    if(t2>=60)
    {
        hr = t2.min/60;
        t2.min = t2.min - hr * 60;
        t2.hr = t2.hr + hr;
    }
    return t2;
}
