//A28. Describe the structure student having roll no and marks of three subjects of five students
#include<stdio.h>
#include<string.h>

struct student
{
	char rollno[10];
	int maths;
	int physics;
	int chem;
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
}
	printf("\nRoll Number\tMaths\tPhysics\tChemistry\n");
for(i=0; i<n; i++){
	printf("%s\t\t%d\t%d\t%d\n",s[i].rollno,s[i].maths,s[i].physics,s[i].chem);
}
}
int main(){
	struct student s[50];
	Info(s);	
}
