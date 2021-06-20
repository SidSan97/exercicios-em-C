#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

int main()
{
  
  int N, tam, cont, espacos, tam2;
  string nomeFinal, nome, aux;

  cin >> N;
  cin.ignore();

  for(int i=0; i<N; i++)
  {
    tam = 0;
    getline(cin, nome);
    tam = nome.size();

    cont    = 0;
    espacos = 0;
    tam2   = 0;

    for(int j=0; j<tam; j++)
    {
      if(nome[j] == ' ')
        espacos++;
    }

    if(espacos == 0)
    {
       aux = toupper(nome[0]);
       cout << aux;
      for(int i=1; i<tam; i++)
      {
       cout<<nome[i];
      }
      cout<<endl;
    }
    else{

    aux = toupper(nome[0]);
    cout << aux <<". ";
    cont++;

    if(cont <= espacos)
    {
      for(int k=0; k<tam; k++)
      {
        if(nome[k] == ' ' && cont<espacos)
        {
          aux = toupper(nome[k+1]);
          cout << aux <<". ";
          cont++;
        }     
      }
    }
    
    if(cont == espacos)
    {
      for(int j = tam; nome[j] != ' '; j--)
      {
        nomeFinal = nomeFinal + nome[j];
      }
      tam2 = nomeFinal.size();

      aux = toupper(nomeFinal[tam2-1]);
      cout << aux;

      for(int n=tam2-2; n>0; n--)
      {
        cout << nomeFinal[n];
      }
    }
    nomeFinal = "";
    cout << endl;
  }
  }
}
