#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char nom[50];
    char prenom[50];
    char ville[50];
    
    printf("Entrez votre nom: ");
    fgets(nom,50,stdin);
    nom[strlen(nom)-1] = '\0';
    
    printf("Entre votre prenom: ");
    fgets(prenom,50,stdin);
    prenom[strlen(prenom)-1] = '\0';
    
    printf("Entre votre ville: ");
    fgets(ville,50,stdin);
    ville[strlen(ville)-1] = '\0';
    
    printf("=====CARTE D'IDENTITE=====\n");
    printf("Nom: %s\n",nom);
    printf("Prénom: %s\n",prenom);
    printf("Ville: %s\n",ville);
    printf("=============================\n");
    
    return 0;
}
