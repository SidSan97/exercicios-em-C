#include <iostream>

using namespace std;

int main()
{
  char P;
  int S;

  while((cin >> P >> S) && P != '#')
  {
    if(S < 90)
    {
      cout << P << " Interna��o" << endl;
    }
    else
    {
      cout << P << " Alta" << endl;
    }
  }
}