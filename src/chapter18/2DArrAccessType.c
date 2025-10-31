#include <stdio.h>

int main(void)
{
  int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};

  printf("a[0]: %p \n", a[0]);
  printf("*(a+0): %p \n", *(a + 0));

  printf("a[1]: %p \n", a[1]);
  printf("*(a+1): %p \n", *(a + 1));

  // 2차원 배열의 다양한 접근 방법
  printf("%d %d \n", a[2][1], (*(a + 2))[1]);
  printf("%d %d \n", a[2][1], (*(a[2]) + 1));
  printf("%d %d \n", a[2][1], *(*(a + 2) + 1));

  return 0;
}