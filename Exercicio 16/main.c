#include <iostream>

using namespace std;

int main() 
{
  int N, K, Hi, p;

  cin >> N >> K;

  for(int i=0; i < N; i++)
  {
    cin >> Hi;

    if(Hi > K)
      p = Hi;
  }

  if(p > K)
    cout << "Voc� n�o vai passar!!!" << endl;
    
  else
    cout << "T� safe, o caminho � izi!!!" << endl;  
}