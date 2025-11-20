#include <stdio.h>

int main(void)
{

  int left1 = 0, right1 = 0;
  printf("좌상단 좌표(x,y)를 입력하시오 : \n");
  scanf("%d", &left1);
  scanf("%d", &right1);

  int left2 = 0, right2 = 0;
  printf("우하단 좌표(x,y)를 입력하시오 : \n");
  scanf("%d", &left2);
  scanf("%d", &right2);

  int area = (left2 - left1) * (right2 - right1);
  printf("두 점이 이루는 직사각형의 넓이는 %d 입니다.\n", area);

  return 0;
}