#include<stdio.h>
int main()
{
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a,&b);
  int res= sum(a,b);
  printf("Sum is %d",res);
}
sum (int a, int b)
{
  return a+b;
}