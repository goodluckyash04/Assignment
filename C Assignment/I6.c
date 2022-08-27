//I6. Write Program use switch statement. Display Monday to Sunday//

#include <stdio.h>
int main()
{
	int day;
	printf("Enter Number to Know the Day :");
	scanf("%d",&day);
	switch(day){
		case 1:
			printf("Monday Today");
			break;
		case 2:
			printf("Tuesday Today");
			break;
		case 3:
			printf("Wednesday Today");
			break;
		case 4:
			printf("Thursday Today");
			break;
		case 5:
			printf("Friday Today");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Yay....Sunday...");
			break;
		default:
		   printf("Invalid Input");	
	}
}
