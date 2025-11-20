#include <stdio.h>

struct person
{
  char name[20];
  char phoneNum[20];
  int age;
};

int main(void)
{
  struct person arr[3] =
      {
          {"김나무", "010-1234-123", 21},
          {"박나무", "010-1234-123", 21},
          {"이나무", "010-1234-123", 21}};

  return 0;
}