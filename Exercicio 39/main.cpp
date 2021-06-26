#include <iostream>

using namespace std;

int main() 
{
  int N, M, Q, dir, esq, meio, H, cont, aux, cont2 = 0;

  cin >> N >> M;

  long int tam = N*M;
  long int A[tam];

  for(int i=0; i<tam; i++)
    cin >> A[i];

  //ORDENAÇÃO
  for(int i=1; i < tam; i++)
  {
    for(int j=0; j<tam-1; j++)
    {
      if(A[j] > A[j+1])
      {
        aux = A[j];
        A[j] = A[j+1];
        A[j+1] = aux;
      }
    }
  }

  cin >> Q;

  //BUSCA BINARIA
  for(int i=0; i<Q; i++)
  {
    esq = 0;
    dir = tam - 1;
    cont = 0;

    cin >> H;

    while(esq<=dir)
    {
      meio = (esq + dir) / 2;

      if(A[meio] == H){
     
        /*for(int i=0; i<tam; i++)
        {
          if(H>=A[i])
          {
            cont++;
          }
      }
      cout << cont <<endl;
        break;*/
      }

      if(A[meio] < H)
      {
        esq = meio + 1;
       
         /*for(int i=0; i<tam; i++)
         {
          if(H>=A[i])
          {
           cont++;
          }
         }
      cout << cont <<endl;
        break;*/
      }
      else
      {
        dir = meio - 1;
        //cout << dir;
        /* for(int i=0; i<tam; i++)
         {
          if(H>=A[i])
          {
           cont++;
          }
         }
      cout << cont <<endl;
        break;*/
      }  
    }
    if(H == A[meio])
    {
     for(int i=0; i<tam; i++)
     {
       if(H>=A[i])
         cont++;
     }
    }
    else if(H == A[esq])
    {
      for(int i=0; i<tam; i++)
      {
        if(H>=A[i])
          cont++;
      }
    }
     else if(H == A[dir])
    {
      for(int i=tam; i>0; i--)
      {
        if(H>=A[i])
          cont++;
      }
    }
  }
  cout << cont;
}