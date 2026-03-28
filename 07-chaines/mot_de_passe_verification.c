#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int mot_de_passe = 1234;
	int essai = 0;
	int nbre = 3;
	
	while(1) {	
		nbre = nbre-1; 
		printf("Entrez le mot de passe : ");
		scanf("%d", &essai);

		if(essai == mot_de_passe) {
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