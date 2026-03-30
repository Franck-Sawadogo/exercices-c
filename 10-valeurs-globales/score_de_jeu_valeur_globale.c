#include<stdio.h>
#include<stdlib.h>

int score = 0;

void menu() {
	printf("===MENU===\n");
	printf("1. Gagner\n");
	printf("2. Perdre\n");
	printf("3. Quitter\n");
    printf("==========\n");
}

int gagner() {
	return score += 10;
}

int perdre() {
	return score -= 5;
}

int main(void)
{
	int choix;
	while(1) {
		menu();
		printf("Entrez votre choix: ");
		scanf("%d",&choix);
		
		switch(choix) {
			case 1:
				printf("Score actuel: %d\n",gagner());
				break;
			case 2:
				printf("Score actuel: %d\n",perdre());
				break;
			case 3:
				printf("Score final: %d\n",score);
				return 0;
			default:
				printf("Choix invalide\n");
		}
	}
	return 0;
}