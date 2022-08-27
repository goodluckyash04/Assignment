//write a program you have to find the factorial of given number//
#include <stdio.h>
 
int main()
{
  int i,a;
  long b=1;
  
  printf("Enter Number:");
  scanf("%d",&a);
  for(i=1;i<=a;i++){
  	b*=i;
  }
  	printf("%d! is %ld",a,b);
}
 
