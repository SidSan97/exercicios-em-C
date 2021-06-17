#include <iostream>

using namespace std;

int main() 
{
  int a, b, c;

  cin >> a >> b >> c;
  c = c + 1;


  if((double)c/a <= b)
    cout << " S " << endl;
  else
    cout << " N " << endl;  
}