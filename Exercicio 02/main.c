#include <stdio.h>

int main(void) 
{
  double C, cesta = 10000 / 10;
  int E;

  scanf("%d", &E);

  C = E / cesta;

  printf("%.2f", C);
  return 0;
}