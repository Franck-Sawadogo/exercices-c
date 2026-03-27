#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char mot[100];
    
    printf("Entrez un mot: ");
    scanf("%s",mot);
    
    int longueur = strlen(mot);
    
    printf("Mot à l'envers: ");
    for (int i = longueur-1; i>=0; i--) {
    	printf("%c",mot[i]);
	}
    
    return 0;
}