//A3. Write a program to sort the array of 5 elements

#include<stdio.h>
int main()
{
	int i,j,temp,len;
	int a[]={25,41,51,2,1};
	len= sizeof a/sizeof a[0];
	for(i=0;i<len;i++){
	  for(j=i+1;j<len;j++){
	  //for ascending order (0,1,2,3)	
	  	if(a[i]>a[j]){ //if a[i] bigger it will become smaller
		temp=a[i];
	  	a[i]=a[j];
	  	a[j]=temp;
		  }
	  }
	 printf("%d ",a[i]);// prints new smaller value   
}
	
printf("\ndescending\n");
for(i=0;i<len;i++){
	  for(j=i+1;j<len;j++){
	  //for descending order (3,2,1,0)	
	  	if(a[i]<a[j]){ 
		temp=a[i];
	  	a[i]=a[j];
	  	a[j]=temp;
		  }
		  
	  }
	  printf("%d ",a[i]);
}
}