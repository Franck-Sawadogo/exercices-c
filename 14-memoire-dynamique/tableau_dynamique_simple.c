#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	char tampon[100];
	
	printf("Entrez un mot: ");
	scanf("%s",tampon);
	
	int taille = strlen(tampon);
	
	char* mot = malloc(taille + 1);
	if(mot==NULL) {
		printf("Erreur allocation\n");
		return 1;
	}
	
    strcpy(mot, tampon);
	for(int i=strlen(mot)-1;i>=0;i--){
		printf("%c",mot[i]);
	}
	
	free(mot);
	mot = NULL;
	
	return 0;
}