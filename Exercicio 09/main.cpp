#include <iostream>

using namespace std;

int main() 
{
  long int C, c, X;

  cin >> C >> c >> X;

  if(((c * c * c) * X) > (C * C * C))
  {
    cout <<"Eh possivel" << endl;
  }
  else 
  {
    cout <<"!Eh possivel" << endl;
  }
}