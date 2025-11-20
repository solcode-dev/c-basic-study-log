#include <stdio.h>

int main(void)
{

  int num1 = 15;    // 00000000 00000000 00000000 00001111
  int num2 = ~num1; // 11111111 11111111 11111111 11110000

  printf("NOT 연산 결과: %d\n", num2);

  return 0;
}