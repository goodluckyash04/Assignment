//    1
//   21
//  321
// 4321
//54321

#include<stdio.h>
int main()
{
	int i,j,s;
	for(i=0;i<5;i++){
		for(s=0;s<=3-i;s++){
			printf(" ");
		}
		for(j=i;j>=0;j--){
			printf("%d",j+1);
		}
		printf("\n");
		}
}