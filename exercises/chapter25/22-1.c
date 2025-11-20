#include <stdio.h>

struct employee
{
  char name[3];
  char id_num[13];
  int wage;
};

int main(void)
{
  struct employee em1;
  scanf("%s", em1.name);
  scanf("%s", em1.id_num);
  scanf("%d", &(em1.wage));

  printf("이름: %s\n", em1.name);
  printf("주민번호: %s\n", em1.id_num);
  printf("급여: %d\n", em1.wage);

  return 0;
}