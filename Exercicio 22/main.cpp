#include <iostream>

using namespace std;

int main() 
{
  int O, D;

  cin >> O >> D;

  int vetor1[D], vetor2[D], total[D], total2, escalar;

  if(O == 1)
  {
    for(int i=0; i<D; i++)
      cin >> vetor1[i];

    for(int l=0; l<D; l++)
      cin >> vetor2[l]; 

    for(int j=0; j<D; j++)
      total[j] = vetor1[j] + vetor2[j];

    for(int k=0; k<D; k++)
      cout << total[k] << " ";                        
  }

  if(O == 2)
  {
    for(int i=0; i<D; i++)
      cin >> vetor1[i];

    for(int l=0; l<D; l++)
      cin >> vetor2[l];

    for(int j=0; j<D; j++)
      total[j] = vetor1[j] * vetor2[j];

    for(int k=0; k<D; k++)
      total2 = total2 + total[k];

      cout << total2 << endl;     
  }

  if(O == 3)
  {
    for(int i=0; i<D; i++)
      cin >> vetor1[i];

    cin >> escalar;

    for(int j=0; j<D; j++)
      total[j] = escalar * vetor1[j];

    for(int i=0; i<D; i++)
      cout << total[i] << " ";  
  }
}