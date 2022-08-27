//A2.Write a program to find out the max number from given 10 elements of array

#include<stdio.h>
int main()
{
	int i,mx=0;
	int a[10]={21,22,32,41,54,112,78,66,98,25};
    for(i=0;i<10;i++){
    	if(mx<a[i]){
    		mx=a[i];
		}
	}
	printf("max number is : %d",mx);
}