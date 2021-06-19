#include <stdio.h>

int main(void)
{
  int D = 0, P = 0, E = 0;

  scanf("%d %d", &D, &P);

  E = D * P / (D + P + 1);

  printf("%d", E);

  return 0;
}
