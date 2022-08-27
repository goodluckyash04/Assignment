//    1
//   2 2
//  3 3 3
// 4 4 4 4
//5 5 5 5 5

#include<stdio.h>
int main()
{
	int i,j,s;
	for(i=0;i<5;i++){
		for(s=0;s<=3-i;s++){
		printf(" ");
	}
	    for(j=0;j<=i;j++){
	    	printf(" %d",i+1);
		}
		printf("\n");
	}
}