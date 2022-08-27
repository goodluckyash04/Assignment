//A4. Write a program to find out the second smallest number from the array.

#include<stdio.h>
int main()
{
	int len,i,j,temp;
	int a[]={22,50,12,40,7};
	len=sizeof a/sizeof a[0];
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		
          }
        }
      printf("%d ",a[i]);
    }  
printf("Min = %d 2nd min %d ",a[0],a[1]);
}
