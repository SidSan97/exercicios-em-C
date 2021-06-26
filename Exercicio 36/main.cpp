#include <iostream>
#include <string>
using namespace std;

int main() 
{
  long int N;
  int esq, dir, meio, Q;
  string animal;

  cin >> N;
  string nome[N];

  for(int i=0; i<N; i++)
    cin >> nome[i];

  cin >> Q;

  for(int i=0; i<Q; i++)
  {
    esq = 0;
    dir = N-1;

    cin >> animal;

    while(esq<=dir)
    {
      meio = (esq + dir) / 2;

      if(nome[meio] == animal){
             break;
      }

      else if(nome[meio] < animal)
      {
        esq = meio + 1;
      }
      else
      {
        dir = meio - 1;
      }
    }

    if (nome[meio]==animal){
        cout << nome[meio] <<" vive!" << endl;
    }
    else if(nome[esq] == animal){
       cout << nome[esq] <<" vive!" << endl;
    }
    else if(nome[dir] == animal){
       cout << nome[dir] <<" vive!" << endl;
    }
    else{
      cout << animal << " foi extinto :("<<endl;
    }

  }  
}