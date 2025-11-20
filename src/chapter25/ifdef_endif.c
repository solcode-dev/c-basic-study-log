#include <stdio.h>
#define MIN 0

int main(void)
{
  int num1, num2;
  printf("두 개의 정수 입력: ");
  scanf("%d %d", &num1, &num2);

#ifdef ADD // ADD가 참이면
  printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#ifdef MIN // MIN이 참이면
  printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

  return 0;
}