#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char nom[50];
	char prenom[50];
	char filiere[50];
	char licence[50];
	
	printf("Entrez votre nom: ");
	fgets(nom, 50, stdin);
	nom[strlen(nom)-1] = '\0';
	
	printf("Entrez votre prénom: ");
	fgets(prenom, 50, stdin);
	prenom[strlen(prenom)-1] = '\0';
	
	printf("Entrez votre filière: ");
	fgets(filiere, 50, stdin);
	filiere[strlen(filiere)-1] = '\0';
	
	printf("Entrez votre année: ");
	fgets(licence, 50, stdin);
	licence[strlen(licence)-1] = '\0';
	
	printf("=======FICHE ETUDIANT======\n");
	printf("Nom: %s\n",nom);
	printf("Prénom: %s\n",prenom);
	printf("Filière: %s\n",filiere);
	printf("Licence: %s\n",licence);
	printf("===========================\n");
	
	return 0;
}