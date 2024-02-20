//C program to illustrate fgets()
#include <stdio.h>
#define MAX 20
int main()
{
  char str[MAX];
  printf("Enter the String: ");
  fgets(str, MAX, stdin);
  printf("string is: %s\n", str);
  return 0;
}
