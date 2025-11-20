#include <stdio.h>

int main(void)
{
  char ch;
  printf("알파벳 하나 입력:\n");
  scanf("%c", &ch);

  printf("%c에 해당하는 정수값은 %d이다.\n", ch, ch);
  return 0;
}