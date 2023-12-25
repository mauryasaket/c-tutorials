#include <stdio.h>
int main()
{
//interchange the values of two numbers//
  int a, b;

  printf("Enter  a  enter b \n");
  scanf("%d %d", &a, &b);


  a=a+b;

  b=a-b; 

  a=a-b;

  printf("a=%d,b=%d \n", a,b);

  return 0;

  
  
}