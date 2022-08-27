//    *
//   * *
//  * * *
// * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *
#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=9;i++){
  	if(i<=5){
  		for(k=4;k>=i;k--){
  			printf(" ");
		  }
		  for(j=1;j<=i;j++){
		  	printf("* ");
		  }
	}else{
		for(k=4;k>=10-i;k--){
			printf(" ");
		}
		for(j=1;j<=10-i;j++){
			printf("* ");
		}
		}
printf("\n");
	}	  
	  }
   
  