#include <stdio.h>
#define SUM(X, Y, C) ((X) + (Y) + (C))
#define MULTIPLY(X, Y, C) ((X) * (Y) * (C))
#define PI 3.14
#define AREA(X) ((X) * (X) * (PI))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int main(void)
{
  printf("%d\n", SUM(3, 3, 3));
  printf("%d\n", MULTIPLY(3, 3, 3));

  printf("원의 넓이: %f \n", AREA(2));

  printf("더 큰 값은 %d 입니다.\n", MAX(3, 5));

  return 0;
}