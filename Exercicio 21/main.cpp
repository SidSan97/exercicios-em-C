#include <iostream>

using namespace std;

int main() 
{
  int N, life;

  cin >> N;

  int X[N];

  for(int i=0; i < N; i++)
    cin >> X[i];

  cin >> life;
  int vida = life;  

  for(int j=0; j < N && life > 0; j++)
  {
    if(X[j] == 1)
      life = vida;

    if(X[j] >= 2)
      life = life - X[j];    
  }

  if(life > 0)
    cout << "Yes, you can" << endl;
  else
    cout << "You Died" << endl;  
}