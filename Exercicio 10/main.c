#include <iostream>

using namespace std;

int main() 
{
  char z, d, g, c;
  
  cin >> z >> g;
  cin >> d >> c;

  if((z == 'd' && d == 'e') || (z == 'e' && d == 'd'))
    cout <<"Bloqueado"<<endl;

  else 
  {
    if((c == 'd' && g == 'e') || (c == 'e' && g == 'd'))
    {
      cout <<"Driblado" << endl;
      cout <<"...e o goleiro pega";
    }
    else if((c == 'd' && g == 'd') || (c == 'e' && g == 'e'))
    {
      cout <<"Driblado" << endl;
      cout <<"Gol"<<endl;
    }
  }
}