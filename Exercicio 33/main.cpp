#include <iostream>

using namespace std;

int main() 
{
  long int N, aux;

  cin >> N;

  int vetor[N];

  for(int i=0; i<N; i++)
    cin >> vetor[i];

  for(int i=1; i<N; i++)
  {
    for(int j=0; j<N-1; j++)
    {
      if(vetor[j] > vetor[j+1])
      {
        aux = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = aux;
      }
    }
  } 

  for(int i=0; i<8; i++)
  {
    cout << vetor[i] <<" ";
  } 
}