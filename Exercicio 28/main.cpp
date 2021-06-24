#include <iostream>

using namespace std;

int main(){
  int N, M, A, L, C, erros=0,nerros=0;

  cin >> N >> M;

  int matriz[N][M];

  for(int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++){
      cin >> matriz[i][j];
        if (matriz[i][j] == 1) {
          erros++;
        }
    }
  }

    cin >> A;
  
  for(int i=0; nerros<A; i++)
  {
    cin >> L >> C;
    L = L-1;
    C = C-1;
      if (matriz[L][C] == 1) {
        erros--;
      }
    nerros++;
  }
  
  if (erros == 0) {
    cout << "HASTA LA VISTA BABY";
  } else {
    cout << "I'LL BE BACK";
  }
  

}