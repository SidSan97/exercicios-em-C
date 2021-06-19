#include <iostream>

using namespace std;

int main() 
{
  int N, S, H = 0, M = 0;

  cin >> N;

  for(int i=0; i<N; i++)
  {
    cin >> S;

    if(S == 1)
      H++;
    else if(S == 2)
      M++;
  }

  cout << H << endl << M << endl;
}