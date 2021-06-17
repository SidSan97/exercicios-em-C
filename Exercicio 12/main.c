#include <iostream>

using namespace std;

int main() 
{
    int A, D, P, TOTAL;

    cin >> A >> D >> P;

    TOTAL = double (A + D + P) / 110 * 100;

    if(TOTAL <= 50)
      cout <<"Seu pokemon nao fara progresso em batalhas" << endl;
      
    else if(TOTAL >= 51 && TOTAL <= 66)
      cout <<"Seu pokemon esta acima da media" << endl; 

    else if(TOTAL >= 67 && TOTAL <= 79)
      cout <<"Seu pokemon certamente me chamou atencao" << endl;

    else if(TOTAL >= 80 && TOTAL <= 100)
      cout <<"Seu pokemon e uma maravilha"<<endl;

    else
      cout<<"Hum, parece que houve um erro"<<endl;       
}