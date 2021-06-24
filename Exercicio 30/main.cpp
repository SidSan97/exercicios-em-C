#include <iostream>
using namespace std;

int main()
{
    int cont = 0, p1, p2, M, N;

    cin >> N >> M;

    int matriz[N][N];

    for(int i=0; i<N; i++)
      for(int j=0; j<N; j++)
        cin >> matriz[i][j];

    for(int i=0; i<M; i++)
    {
      cin >> p1;
      cin >> p2;
    
        for(int j=p1; j>=0; j--)
        {
          if(matriz[j][p2] == 1){
              cont++;
              matriz[j][p2] = 0;
              break;
          }     
        }
    }

    cout << cont << endl;
}

