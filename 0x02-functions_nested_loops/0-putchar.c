#include <unistd.h>

/**
 * _putchar - prints _putchar followed by a new line
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main (void)
{
  write(1, "_putchar\n",9);
  return 0;
}
