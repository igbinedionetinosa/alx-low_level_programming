#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
int main(void)
{
  print_alphabet();
  return (0);
}

void print_alphabet(void)
{
  char ch;

  ch = 'a';

  while (ch <= 'z')
    {
      _putchar(ch);
      ch++;
    }

  _putchar('\n');
}
int _putchar(char c)
{
  return (write(1, &c, 1));
}
