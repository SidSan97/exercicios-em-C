#include <stdio.h>

int main(void)
{
  int N, C, D, U;

  scanf("%d", &N);

  C = N % 10;
  D = N / 10 % 10;
  U = N / 100 % 10;

  printf("%d %d %d", C,D,U);
  return 0;
}
