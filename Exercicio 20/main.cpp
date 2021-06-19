#include <iostream>

using namespace std;

int main() 
{
  int N, C, numPedra;

  cin >> N;

  int vetor[N];

  for(int i=0; i < N; i++)
    cin >> vetor[i];

  cin >> C;

  for(int k=0; k < N; k++)
  {
    if(vetor[k] == C)
      numPedra = vetor[k];
  }

  if(numPedra == C)
    cout << numPedra << endl;
  else
    cout << -1 << endl;  
}