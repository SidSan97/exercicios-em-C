#include <iostream>

using namespace std;

int main() 
{
  int T = 0, P = 0, LIMITE = 1;

  cin >> T;

  while(LIMITE != 0)
  {
    cin >> LIMITE;

    if(LIMITE > T)
      P = LIMITE;
  }

  if(P > T)
    cout << "ALARME" << endl;
  else 
    cout << "O Havai pode dormir tranquilo" << endl;
}