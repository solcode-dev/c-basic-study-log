#include <stdio.h>
#include <ctype.h>

int main(void)
{

  int ch;
  ch = getchar();

  if (isalpha(ch))
  {
    if (isupper(ch))
    {
      putchar(tolower(ch));
    }
    else if (islower(ch))
    {
      putchar(toupper(ch));
    }
  }
  else
  {
    putchar('e');
    putchar('r');
    putchar('r');
    putchar('o');
    putchar('r');
  }

  return 0;
}