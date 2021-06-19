#include <iostream>

using namespace std;

int main() 
{
  int P, N, M;

  cin >> N;

  for(int i = 0; i < N; i++)
  {
    cin >> P >> M;

    cout << P + M << endl;
  }
}