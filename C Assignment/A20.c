//A20. Write a program to print the Fibonacci series using function
#include<stdio.h>
/*int Fib(int number){
	if(number==0){
		return 0;
	}else if(number==1){
		return 1;
	}else{
		return Fib(number-1) + Fib(number-2);
	}	
}*/
int Fib(int number)
{
   int n1=0, n2=1, a;
  for(int i=0;i<number;i++)
   {
   	 a = n1+n2;
     printf("%d ", n1);
     n1 = n2;
     n2 = a;
   }
}

int main(){
	int i,a;
	printf("Enter any Number:");
	scanf("%d",&a);
Fib(a);
}
//	for(i=0;i<a;i++){
//	printf("%d ",Fib(i));
//   }
