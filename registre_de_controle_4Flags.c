#include<stdio.h>
#include<stdlib.h>

#define MOTEUR    (1 << 0)  // bit 0 = 1
#define FREIN     (1 << 1)  // bit 1 = 2
#define ALARME    (1 << 2)  // bit 2 = 4
#define MODE_AUTO (1 << 3)  // bit 3 = 8

void menu() {
	printf("-----------\n");
	printf("1. Activer Moteur\n");
	printf("2. Desactiver Moteur \n");
	printf("3. Activer Frein \n");
	printf("4. Desactiver Frein \n");
	printf("5. Activer Alarme \n");
	printf("6. Desactiver Alarme \n");
	printf("7. Activer Mode auto\n");
	printf("8. Desactiver Mode auto\n");
	printf("9. quitter\n");
    printf("----------\n");
}

void affichermenu(int etat) {
	printf("===========\n");
	printf("MOTEUR:    %s\n",(etat & MOTEUR)    ? "actif" : "inactif");
	printf("FREIN:     %s\n",(etat & FREIN)     ? "actif" : "inactif");
	printf("ALARME:    %s\n",(etat & ALARME)    ? "actif" : "inactif");
	printf("MODE_AUTO: %s\n",(etat & MODE_AUTO) ? "actif" : "inactif");
	printf("============\n");
}

int main(void) {
	int choix;
    int etat = 0;

    while(1){
    	menu();
    	printf("Choix: ");
    	scanf("%d",&choix);
    	
    	switch(choix){
    		case 1:
    			etat |= MOTEUR;
    			affichermenu(etat);
    			break;
    		case 2:
    			etat &= ~MOTEUR;
    			affichermenu(etat);
    			break;
    		case 3:
    			etat |= FREIN;
    			affichermenu(etat);
    			break;
    		case 4:
    			etat &= ~FREIN;
    			affichermenu(etat);
    			break;
    		case 5:
    			etat |= ALARME;
    			affichermenu(etat);
    			break;
    		case 6:
    			etat &= ~ALARME;
    			affichermenu(etat);
    			break;
    		case 7:
    			etat |= MODE_AUTO;
    			affichermenu(etat);
    			break;
    		case 8:
    			etat &= ~MODE_AUTO;
    			affichermenu(etat);
    			break;
    		case 9:
    			return 0;
		}
	}

    return 0;
}