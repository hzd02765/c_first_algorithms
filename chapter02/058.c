#include <stdio.h>
#include <math.h>

#define f(x) (sqrt(4-(x)*(x)))

void main(void)
{
  int k;
  double a, b, n, h, x, s, sum;

  printf("積分区間 A,B ?");
  scanf("%1f %1f", &a, &b);

  n = 50;
  h = (b - a) / n;
  x = a;
  s = 0;
  for (k = 1; k <= n - 1; k++){
    x = x + h;
    s = s + f(x);
  }
  sum = h * ((f(a)+f(b))/2+s);
  printf("    /%f\n", b);
  printf("    |  sqrt(4 - x * x) = %f\n", sum);
  printf("    /%f\n", a);
}
