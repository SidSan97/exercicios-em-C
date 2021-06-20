#include <iostream>

using namespace std;

int main() 
{
  string Nd, Pi;
  int N, P, A, cont, aux, limite;

  cin >> Nd;
  cin >> N;

  int D[N];
  int dataMarcada[N];

  for(int i=0; i<N; i++)
    cin >> D[i];

  limite = D[N-1];  

  cin >> P;

  for(int i=0; i<P; i++)
  {
    cin >> A;
    cin >> Pi;
    cont = 0;
    aux = A;

    for(int i=0; i<N; i++)
    {
      if(aux == D[i] && aux != dataMarcada[i])
      {
        dataMarcada[i] = A;
        aux = A;
        cont++;
        break;
      }
      else if(D[i] == A && aux == dataMarcada[i] && dataMarcada[i]<D[i])
      {
        aux = D[i+1];
        dataMarcada[i] = aux;
        cont++;
        break;
      }
      else if(aux != D[i] && aux < D[i+1] && D[i+1] != dataMarcada[i])
      {
        aux = D[i+1];
        dataMarcada[i] = aux;
        cont++;
        break;
      }
      else if(aux == D[i] && D[i] == dataMarcada[i] && dataMarcada[i] != D[i+1])
      {
        aux = D[i+1];
        dataMarcada[i] = aux;
        cont++;
        break;
      }
      else if(aux == D[i] && D[i] == dataMarcada[i] && dataMarcada[i] == D[i+1])
      {
        for(int j = 0; j<N; j++)
        {
          if(D[i] == dataMarcada[i])
            cont =0;
        }
        break;
      }
    }

    if(cont > 0){
      cout << Pi <<" agendado com o(a) Dr(a). "<< Nd <<" para dia "<< aux <<"." <<endl;
      //break;
    }
    else {
      cout << "Nao foi possivel agendar a consulta para "<< Pi <<"."<<endl;  
      //break;
    }
  }
}
