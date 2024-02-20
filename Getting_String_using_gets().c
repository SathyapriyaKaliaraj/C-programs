#include <stdio.h>
#define MAX 20
int main()
{
  char str[MAX];
  printf("Enter the String: ");
  gets(str);
  printf("string is: %s\n", str);
  return 0;
}
