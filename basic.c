#include<stdio.h>
int main() {
  float n;
  printf("Enter a real number: "); 
  scanf("%f",&n);
  int x=(float)n;
  if(n-x==0)
    printf("Integer");
  else
    printf("Not an Integer.");
  return 0;
}