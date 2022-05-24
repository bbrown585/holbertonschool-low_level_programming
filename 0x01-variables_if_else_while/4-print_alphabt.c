#include<stdio.h>
/**
*main - Alpha a to z
*
* Return: Always 0 ( sucessful)
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
}
putchar('\n');
return (0);
}
