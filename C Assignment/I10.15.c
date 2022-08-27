//  *
// * *
//* * *
// * *
// * *
//* * *
// * *
#include <stdio.h>
 
int main()
{
 int i,j;
 for(i=0;i<7;i++){
 	for(j=0;j<5;j++){
 		if(i==0 && j==2){
 			printf("*");
 		}else if((i==1||i==3||i==4||i==6)&& (j==1||j==3)){
 			printf("*");
 		}else if((i== 2 ||i==5) && (j==0||j==2||j==4)){
 			printf("*");
 		}else{
 			printf(" ");
 			}
 		}
 		printf("\n");
 		}
}
 
