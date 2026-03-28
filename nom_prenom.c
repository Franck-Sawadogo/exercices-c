#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char nom[100];
	char prenom[100];
	char complet[200];
	
	printf("Entrez votre nom: ");
	fgets(nom,100,stdin);
	nom[strlen(nom)-1] = '\0';
	
	printf("Entrez votre prénom: ");
	fgets(prenom,100,stdin);
	prenom[strlen(prenom)-1] = '\0';
	
	strcpy(complet, prenom);
	strcat(complet," ");
	strcat(complet, nom);
	
	printf("Nom complet: %s\n",complet);
	printf("Ton nom complet a %d lettres\n",strlen(complet));
	
	return 0;
}