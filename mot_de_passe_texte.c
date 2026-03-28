#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char* mot_de_passe = "burkina";
	char essai[100];
	int nbre = 3;
	
	while(1) {	
		nbre = nbre-1; 
		printf("Entrez le mot de passe : ");
		scanf("%s", essai);

		if(strcmp(essai,mot_de_passe) == 0) {
        printf("Accès autorisé !\n");
        break;
        } else if(nbre == 0) {
            printf("Accès bloqué !\n");
            break;
        } else {
             printf("Mot de passe incorrect, il vous reste %d essais\n", nbre);
        }
	}
	return 0;	
}