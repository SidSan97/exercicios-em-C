#include <iostream>

using namespace std;

int main() 
{
  int N = 0, M = 0, SOMA = 0, POCOES = 0, TOTAL = 0;

  cin >> N >> M;

  for(int i=0; i < N; i++)
  {
    for(int j=0; j < M; j++)
    {      
      cin >> POCOES; 
      SOMA = SOMA + POCOES;  
    }
    if(SOMA > TOTAL){
      TOTAL = SOMA;}

      SOMA *= 0;
  }
  cout << TOTAL << endl;
}