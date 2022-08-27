//A21. Write a program to find out the max number from given array using function 

#include<stdio.h>
int max(int a[],int size){
	int i,temp=0;
//	int size=sizeof a/ sizeof a[0];
	for(i=0;i<size;i++){
		if(temp<a[i]){
		temp=a[i];
	}	
}
printf("\nmax number is %d",temp);
}

int main(){
	int a[20],size,i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter Element %d:",i);
		scanf("%d",&a[i]);
	}
for(i=0;i<size;i++){
   printf("%d ",a[i]);
   }
//	int a[]={24,45,404,13,15,119,120};
//	int size=sizeof a/ sizeof a[0];
	max(a,size);
}