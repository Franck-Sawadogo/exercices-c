#include<stdio.h>
#include<stdlib.h>

    enum Etat { ARRET=1, DEMARRAGE=2, EN_MARCHE=3, ARRET_URGENCE=4 };

int main(void) {
    enum Etat e;

	printf("1. Arret\n2. Demarrage\n3. En marche\n4. Arret d'urgence\n");
	
    printf("\nChoix: ");
    scanf("%d",&e);
    
    switch(e) {
    case ARRET:
        printf("Arret initialise\n");
        break;
    case DEMARRAGE:
        printf("Demarrage initialise\n");
        break;
    case EN_MARCHE:
        printf("Moteur en marche\n");
        break;
    case ARRET_URGENCE:
        printf("Arret d'urgence\n");
        break;
    default:
        printf("Choix invalide\n");
	}

    return 0;
}