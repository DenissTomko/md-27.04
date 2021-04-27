#include <iostream>
using namespace std;

int main() {
  cout << "ievadi skaitli m un k,kur m > k\n";
  int m,k,counter;
  cin >> m;
  cin >> k;
  for (int i=1;i<=m;i++)
  {
    if (i%k==0) {counter++;}
  }
  cout << "counter = " << counter ;
  return 0;
}