#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int secret = 73;
	int essai = 0;
	int nbre = 5;
	
	while(1) {	
		nbre = nbre-1; 
		printf("Entrez le nombre secret : ");
		scanf("%d", &essai);

		if (essai == secret) {
			printf("Vous avez trouvé !");
			break;
		}
		 
		if(essai<secret) {
			printf("Trop petit\n");
		} else {
			printf("Trop grand\n");
		}
		
        if (nbre != 0) {
            printf("Il vous reste %d essais\n", nbre);
        } else if(nbre == 0) {
			printf("La partie est terminée, la réponse est: %d",secret);
			break;
		}	
	}
	return 0;	
}