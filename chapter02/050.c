#include <stdio.h>

unsigned rndum = 13;

unsigned irnd(void);

void main(void){
  int j;

  for (j = 0; j < 100; j++){
    printf("%8d", irnd());
  }
  printf("\n");
}

unsigned irnd(void)
{
  rndnum = (rndnum * 109 * 2021) % 32768;
  return rndnum;
}
