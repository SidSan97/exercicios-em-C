#include <iostream>

using namespace std;

int main() 
{
  int L, P, L1, L2, L3, P1, P2, P3;

  cin >> L1 >> P1;
  cin >> L2 >> P2;
  cin >> L3 >> P3;

  L = L1 + L2 + L3;
  P = P1 + P2 + P3;

  if(L > P){
    cout <<" Lucas \n";
  }
  else if(L < P){
    cout <<" Pedro \n";
  }
  else{
    cout <<" Empate \n";
  } 
}