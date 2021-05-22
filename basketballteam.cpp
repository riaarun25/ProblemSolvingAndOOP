#include <iostream>
#include<string.h>
using namespace std;

inline int fact(int n)
{
  int counter, factorial = 1;
  for (counter = 1; counter <= n; counter++)
    factorial*=counter;
  return factorial;
}

int main(){
  int no_of_players, combinations;
  cout << "Enter the number of players in the basketball team: ";
  cin >> no_of_players;
  combinations = fact(no_of_players)/(fact(5)*fact(no_of_players-5))*5;
  cout << "The number of possible combinations are: "<< combinations;
  return 0;
}
