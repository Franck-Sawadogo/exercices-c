#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char* nom = "admin";
    char* mot_de_passe = "1234";
    int nbre = 3;
    char essai_nom[50];
    char essai_mot[50];
    
    while(1) {
    printf("Entrez un nom d'utilisateur: ");
    scanf("%s",essai_nom);
    printf("Le mot de passe: ");
    scanf("%s",essai_mot);
    
    if((strcmp(essai_nom, nom) == 0) && (strcmp(essai_mot, mot_de_passe)==0)) {
    	printf("Accès autorisé");
    	break;
	}   else {
		nbre -= 1;
		if(nbre==0) {
			printf("Accès bloqué !\n");
			break;
		}
		printf("Il vous reste %d essais\n",nbre);
	}
	
	}
    return 0;
}