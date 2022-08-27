//    A
//   B C
//  D E F
// G H I J
//K L M N O
#include<stdio.h>
int main()
{
	int i,j,k;
	char a='A';
	for(i=0;i<5;i++){
		for(k=0;k<4-i;k++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("%c ",a++);
			}
	printf("\n");
	}
	
}