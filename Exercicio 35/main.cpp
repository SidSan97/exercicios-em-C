#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
  int N, tam, i, j, aux;

  cin >> N;
  int vetor[N];

  string livros;

  for(int i=0; i<N; i++)
  {
    cin >> livros;
    vetor[i] = livros.size();
  }

  for(i=1; i < N; i++)
  {
    for(j=0; j<N-1; j++)
    {
      if(vetor[j] > vetor[j+1])
      {
        aux = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = aux;
      }
    }
  }

  for(int i=0; i<N; i++)
  {
    for(int k=0; k<vetor[i]; k++){
      cout <<"*";
    }
    cout << endl;
  }
}