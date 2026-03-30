#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int tentatives = 0;

int main(void)
{
	char* mot_de_passe = "burkina";
	char essai[50];
	
	while(1) {
		printf("Entrez le mot de passe: ");
		scanf("%s",essai);
		
		if(strcmp(mot_de_passe, essai)!=0) {
			tentatives += 1;
			printf("Incorrect, tentative %d\n",tentatives);
            printf("\n");
		} else {
			printf("Accès autorisé - tentatives utilisées: %d\n",tentatives);
			break;
		}
	}
	
	return 0;
}