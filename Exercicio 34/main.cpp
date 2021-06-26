#include <iostream>

using namespace std;

int main() 
{
  int N, aux, i, j, M;

  cin >> N;

  int vetor[N];

  for(i=0; i<N; i++)
  {
    cin >> vetor[i];
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

  cout << vetor[N/2] << endl;
}