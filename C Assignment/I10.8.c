#include<stdio.h>
int main()
{
		int n,i,a,sum,mx;
	printf("Enter Any Nnumber:");
	scanf("%d",&n);
	while(n>0){
	a=n%10;
	n=n/10;
	for(int i=0;i<4;i++){
		if(mx<a){     //mx value will be the last true value of a
    mx=a;
     }
	}
	
}
    printf("max number is =%d",mx);
}