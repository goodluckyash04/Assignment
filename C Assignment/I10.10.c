//* * * * *
// * * * *
//  * * *
//   * *
//    *

#include<stdio.h>
int main(){
	int i,j,s;
	for(i=0;i<5;i++){
		for(s=i;s>=0;s--){
			printf(" ");
		}
		for(j=0;j<5-i;j++){
			printf("* ");
		}
		printf("\n");
		}
	}
