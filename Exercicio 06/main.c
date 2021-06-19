#include <stdio.h>

int main(void) 
{
  int N, H, S, M;

  scanf("%d", &N);

  H = N / 3600;
  M = (N % 3600) / 60;
  S = (N % 3600) % 60;

  printf("%dh %dm %ds", H, M, S);
  return 0;
}
