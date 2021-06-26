#include <iostream>
#include <string>

using namespace std;

int main() 
{
  long int N, J;
  int esq, dir, meio, P;
  string nomeJedi1;

  cin >> N;

  string nomeJedi[N];
  int M[N];

  for(int i=0; i<N; i++)
  {
    cin >> nomeJedi[i];
    cin >> M[i];
  }

  cin >> J;

  /*string nomeJedi1[J];
  int P[J];*/

  for(int i=0; i<J; i++)
  {
    esq = 0;
    dir = N-1;

    cin >> nomeJedi1;
    cin >> P;

    while (esq <= dir)
    {
      meio = (esq + dir) / 2;

      if (nomeJedi1 == nomeJedi[meio])
      {
        break;
      }

      if (nomeJedi1 > nomeJedi[meio])
      {
        esq = meio + 1;
      }
      else
      {
        dir = meio - 1;
      }
    }

     if (nomeJedi1 == nomeJedi[meio])
     {
        M[meio] = M[meio] - P;
     }

     else if (nomeJedi1 == nomeJedi[esq])
     {
        M[esq] = M[esq] - P;
     }

      else if (nomeJedi1 == nomeJedi[dir])
     {
        M[dir] = M[dir] - P;
     }
     
  }  

  for(int i=0; i<N; i++)
  {
    cout << nomeJedi[i] <<" "<< M[i] << endl;
  }

}