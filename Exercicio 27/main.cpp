#include <iostream>

using namespace std;

int main() 
{
  int M, N, i, j;

  cin >> M >> N;

  int matrizA[M][N], matrizB[M][N], matrizC[M][N];

  for(i=0; i<M; i++)
  {
    for(j=0; j<N; j++)
      cin >> matrizA[i][j];
  }

  for(i=0; i<M; i++)
  {
    for(j=0; j<N; j++)
      cin >> matrizB[i][j];
  }

  for(i=0; i<M; i++)
  {
    for(j=0; j<N; j++)
      matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
  }

  for(i=0; i<M; i++)
  {
    for(j=0; j<N; j++)
    {
      cout << matrizC[i][j] <<" ";
    }
    cout << endl;
  }
}