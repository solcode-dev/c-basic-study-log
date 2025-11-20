#include <stdio.h>

int main(void)
{
  // int num = 0;
  // printf("입력하시오: ");
  // scanf("%d", &num);

  // num = ~num + 1;
  // printf("연산 결과: %d \n", num);

  ////////////////////////

  int num2 = 3;

  num2 = num2 << 3; // 곱하기 8
  num2 = num2 >> 2; // 나누기 4
  printf("연산 결과: %d \n", num2);

  return 0;
}