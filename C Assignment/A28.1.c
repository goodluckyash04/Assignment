//A28.1 Write a program to print all the information and total marks and percentage of each student.

#include<stdio.h>
#include<string.h>

struct student
{
	char rollno[10];
	int maths;
	int physics;
	int chem;
	int total;
	float percent;
};
struct student Info(struct student s[50]){
	int i,n;
	printf("Enter the Number of Student:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("\nEnter Student Roll Number:");
	scanf(" %[^\n]%*c",s[i].rollno);
	printf("Marks of Maths:");
	scanf("%d",&s[i].maths);
	printf("Marks of Physics:");
	scanf("%d",&s[i].physics);
	printf("Marks of Chemistry:");
	scanf("%d",&s[i].chem);
	s[i].total=s[i].maths+s[i].physics+s[i].chem;
	s[i].percent=((float)s[i].total/300)*100;
}
	printf("\nRoll Number\tMaths\tPhysics\tChemistry\tTotal\tPercent\n");
for(i=0; i<n; i++){
	printf("%s\t\t%d\t%d\t%d\t\t%d\t%0.2f\n",s[i].rollno,s[i].maths,s[i].physics,s[i].chem,s[i].total,s[i].percent);
}
}
int main(){
	struct student s[50];
	Info(s);	
}
