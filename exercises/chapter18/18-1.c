#include <stdio.h>

/* 물음표를 대신할 수 있는 포인터 변수를 선언하자.*/
int main(void)
{
  int *arr1[5];
  int *arr2[3][5];

  //? ? ? = arr1;
  // int **ptr2: 포인터 변수들의 1차원 배열을 담을 수 있는 포인터 변수
  int **ptr1 = arr1;

  //? ? ? = arr2;
  // int* (*ptr2)[5]: 포인터 변수들의 2차원 배열을 담을 수 있는 int 포인터형 포인터 변수
  int *(*ptr2)[5] = arr2;

  return 0;
}