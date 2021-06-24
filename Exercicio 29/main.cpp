#include <iostream>

using namespace std;

int main() 
{
  int N, M, i, k;

  cin >> N >> M;

  int X[N][M], ganho = 0;

  for(int a=0; a<N; a++)
  {
    for(int b=0; b<M; b++)
    {
      cin >> X[a][b];
    }
  }

   for (i = 0; i < N; i++) 
   {
    for (k = 0; k < M; k++) 
    {
      if (i%2 != 0) 
      {
        ganho = ganho + X[i][M-1-k];
      } 
      else if (i%2 == 0) 
      {
        ganho = ganho + X[i][k];
      }

      if (ganho < 0) 
      {
        ganho = 0;
      }
    }
   }
  cout << ganho << endl;
}