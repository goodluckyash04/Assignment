//    1
//   1 2
//  1 2 3
// 1 2 3 4
//1 2 3 4 5

#include<stdio.h>
int main()
{
	int i,j,s;
	for(i=0;i<5;i++){
		for(s=0;s<=3-i;s++){
		printf(" ");
	}   
	    for(j=0;j<=i;j++){
		printf(" %d",j+1);
	}        
	printf("\n");
}
}