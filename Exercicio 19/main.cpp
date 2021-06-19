#include <iostream>

using namespace std;

int main() 
{
  int N;

  cin >> N;

  int i[N];

  for(int a=0; a < N; a++)
    cin >> i[a];

  for(int b=N - 1; b >= 0; b--)
    cout << i[b] << " ";
    
}