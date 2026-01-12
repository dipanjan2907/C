#include <stdio.h>
int main()
{
  // float n;
  // printf("Enter a real number: ");
  // scanf("%f",&n);
  // int x=(float)n;
  // if(n-x==0)
  //   printf("Integer");
  // else
  //   printf("Not an Integer.");

  char name[100];
  printf("Enter full name: ");
  // gets(name);
  fgets(name, 50, stdin);
  puts(name);
  return 0;
}