#include <stdio.h>

int main(void)
{

  char ch = 9;
  int inum = 1052;
  double dnum = 3.1415;

  printf("ch의 크기: %lu \n", sizeof ch);
  printf("inum의 크기: %lu \n", sizeof inum);
  printf("dnum의 크기: %lu \n", sizeof dnum);

  printf("char의 크기: %d \n", sizeof(char));
  printf("int의 크기: %d \n", sizeof(int));
  printf("long의 크기: %d \n", sizeof(long));
  printf("long long의 크기: %d \n", sizeof(long long));
  printf("float의 크기: %d \n", sizeof(float));
  printf("double의 크기: %d \n", sizeof(double));

  return 0;
}