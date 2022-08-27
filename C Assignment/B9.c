//B9.Write a Program to show swap of two No's without using third variable.//

#include<stdio.h>
 int main(){
 int a,b;
  printf("enter value of a: ");
  scanf("%d",&a);
  printf("enter value of b: ");
  scanf("%d",&b);
  a= a+b; 
  b= a-b; 
  a= a-b;
  printf("value of a is %d & Value of b is %d",a,b );
}

