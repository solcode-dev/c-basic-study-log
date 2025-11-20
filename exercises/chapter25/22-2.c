#include <stdio.h>

struct employee
{
  char name[3];
  char id_num[13];
  int wage;
};

int main(void)
{
  struct employee arr[3];
  int i;

  for (i = 0; i < 3; i++)
  {
    printf("이름: ");
    scanf("%s", &arr[i].name);
    printf("주민번호: ");
    scanf("%s", &arr[i].id_num);
    printf("임금: ");
    scanf("%d", &arr[i].wage);
  }

  for (i = 0; i < 3; i++)
  {
    printf("[%s %s %d] ", arr[i].name, arr[i].id_num, arr[i].wage);
  }

  return 0;
}