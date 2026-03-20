#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int age;
	
	printf("Entrez votre âge: ");
	scanf("%d",&age);
	
	if(age<12) {
		printf("Enfant");
	} else if (age<18) {
		printf("adolescent");
	} else if (age<60) {
		printf("Adulte");
	} else {
		printf("Senior");
	}
	
	return 0;
} 