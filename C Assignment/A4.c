//A4. Write a program to find out the second smallest number from the array.

#include<stdio.h>
int main()
{
	int len,i,mx=0;
	int a[]={22,50,12,4,17};
	len=sizeof a/sizeof a[0];
	for(i=0;i<len;i++){
		if(mx<a[i]){
			mx=a[i];
		}
	}
	
	for(i=0;i<len;i++){	
		if(mx>a[i]){
			mx=a[i];
		}	
}
printf("Min = %d",mx);
}