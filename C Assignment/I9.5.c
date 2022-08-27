//I9.5 Write a program you have to print the Fibonacci series up to user given number (1, 1, 2, 3, 5, 8....)

#include <stdio.h>
int main() {
  int n1 = 0, n2 = 1, a= 0, n,i;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Fibonacci Series of %d is: %d %d ",n, n1, n2);// displays the first two terms which is always 0 and 1
  
  for(i=2;i<n;i++) {
   a = n1 + n2;
    printf("%d ", a);
    n1 = n2;
    n2 = a ;
  }

}