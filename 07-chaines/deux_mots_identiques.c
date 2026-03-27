#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char mot1[50];
    char mot2[50];
    printf("Entrez le premier mot: ");
    scanf("%s",mot1);
    printf("Entrez le deuxieme mot: ");
    scanf("%s",mot2);
    
    if( strcmp(mot1, mot2) == 0 ) {
    	printf("Identique !");
	} else {
		printf("Different !");
	}
    
    
    return 0;
}