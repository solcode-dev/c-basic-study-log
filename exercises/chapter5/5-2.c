#include <stdio.h>

int main(void)
{
  double num1, num2;
  printf("두 개의 실수를 입력하시오: \n");
  scanf("%lf", &num1);
  scanf("%lf", &num2);

  printf("+: %lf\n", num1 + num2);
  printf("-: %lf\n", num1 - num2);
  printf("/: %lf\n", num1 / num2);
  printf("*: %lf\n", num1 * num2);

  return 0;
}