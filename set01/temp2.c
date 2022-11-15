//Take a string as an input from the user and calculate the length of the string
/* #include <stdio.h>
 int main()
 { int a;
   char name[20];
   printf("Enter your name\n");
   scanf("%s",&name);

   for (a = 0 ; name[a] != '\0'; ++a);
   printf("Length of the string = %d",a);
   return 0;
 }*/

#include <stdio.h>
int main()
{ int a = 0;
  char name[20];
  printf("Enter your name\n");
  scanf("%s",&name);

  while (name[a] != '\0')
    {
      a++;
    }
  printf("Length of the string = %d",a);
  return 0;

}
  