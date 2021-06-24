#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main() 
{
  int i, j, k, tam, N;
  string palavra;

  cin >> N;

  char matriz[N][N];

  for(i=0; i<N; i++)
    for(j=0; j<N; j++)
      cin >> matriz[i][j];

  cin >> palavra;
  tam = palavra.size();

  for(i=0; i<N; i++)
  {
    for(j=0; j<N; j++)
    {
      if(matriz[i][j] == palavra[0])
      {
        //BUSCA POR SENTIDO INVERSO-HORIZONTAL
        if(j-tam+1 >=0)
        {
          for(k=1; k<tam; k++)
          {
            if(palavra[k] != matriz[i][j-k])
            {
              break;
            }
          }
          if(k==tam)
          {
            cout << i << " "<< j << " " << i <<" "<< j-tam+1 << endl;
          }
        }

        //BUSCA SENTIDO NORMAL-HORIZONTAL
        //if(j <= N-tam)
        if(j+tam-1<N)
        {
          for(k=1; k<tam; k++)
          {
            if(palavra[k] != matriz[i][j+k])
            {
              break;
            }
          }
          if(k==tam)
          {
            cout << i << " "<< j << " " << i <<" "<< j+tam-1 << endl;
          }
        }

        //BUSCA POR SENTIDO NORMAL-VERTICAL
        //if(i <= N-tam)
        if(i+tam-1<N)
        {
          for(k=1; k<tam; k++)
          {
            if(palavra[k] != matriz[i+k][j])
            {
              break;
            }
          }
          if(k==tam)
          {
            cout << i << " "<< j << " " << i+tam-1 <<" "<< j << endl;
          }
        }

        //BUSCA POR SENTIDO INVERSO-VERTICAL
        //if(i >= N-tam)
        if(i-tam+1>=0)
        {
          for(k=1; k<tam; k++)
          {
            if(palavra[k] != matriz[i-k][j])
            {
              break;
            }
          }
          if(k==tam)
          {
            cout << i << " "<< j << " " << i-tam+1 <<" "<< j << endl;
          }
        }
      }
    }
  }

}

