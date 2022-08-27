//A25. Write a Program of Make a string reverse using recursive Function
#include<stdio.h>
#include<string.h>
void reverse(char string) {
	scanf("%c", &string);
    if (string != '\n') {
        reverse(string);
        printf("%c", string);
    }
}
int main() {
	char a;
	printf("Enter a sentence: ");
    reverse(a);
}

