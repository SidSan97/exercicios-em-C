#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
  string S, palavra;

  cin >> S;

  int tam = S.size();

  for(int i=tam-1; i>=0; i--)
  {
    palavra += S[i];
  }

  if(palavra == S)
    cout<<"Sim"<<endl;
  else
    cout<<"Nao"<<endl;
}