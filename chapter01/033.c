#include <stdio.h>
#include <stdlib.h>

#define NUM 100

double rnd(void);

void main(void)
{
  double x, y, pai;
  int i, in =0;

  for (i = 0; i < NUM; i++){
    x = rnd();
    y = rnd();
    if (x * x + y <= 1){
      in++;
    }
  }
  pai = (double)4 * in / NUM;
  printf("π の値=%f\n", pai);
}

double rnd(void)
{
  return (double)rand() / (RAND_MAX + 0.1);
}
