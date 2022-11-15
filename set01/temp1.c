//Store your name in a variable and print it
#include <stdio.h>
int main()
{
  char name[10];
  printf("Enter your name\n");
  scanf("%s",&name);
  printf("Your name : %s", name);
  return 0;
}