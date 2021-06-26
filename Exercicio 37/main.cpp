#include <iostream>

using namespace std;

int main() 
{
  long int L, A;
  int esq, dir, meio;
  string livroReq;
  
  cin >> L;

  string vet[L];
  int status[L];

  for(int i=0; i<L; i++)
  {
    cin >> vet[i];
    cin >> status[i];
  }
  /*for(int i=0; i<L; i++)
    cin >> status[i];*/  

  cin >> A;

  for(int i=0; i<A; i++)
  {
    esq = 0;
    dir = L-1;

    cin >> livroReq;

    while (esq <= dir)
    {
      meio = (esq + dir) / 2;

      if (livroReq == vet[meio])
      {
        break;
      }

      if (livroReq > vet[meio])
      {
        esq = meio + 1;
      }
      else
      {
        dir = meio - 1;
      }
    }

     if (livroReq == vet[meio] && status[meio] == 2)
     {
        cout << "Emprestado" << endl;
     }

     else if (livroReq == vet[meio] && status[meio] == 1)
     {
        cout << "Disponivel" << endl;
     }
     else
     {
        cout << "Nao encontrado" << endl;
     }
  }  
}