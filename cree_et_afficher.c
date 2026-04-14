#include<stdio.h>
#include<stdlib.h>

struct Noeud{
	int valeur;
	struct Noeud* suivant;
};

struct Noeud* AjouterEntete(struct Noeud* tete, int valeur){
struct Noeud* nouveau = malloc(sizeof(struct Noeud));
if(nouveau==NULL){
	printf("erreur allocation\n");
	return tete;
}
	nouveau->valeur=valeur;
	nouveau->suivant=tete;
	return nouveau;
}

void afficher(struct Noeud* tete){
	struct Noeud* courant = tete;
	while(courant != NULL){
		printf("%d ",courant->valeur);
		courant= courant->suivant;
	}
}

void liberer(struct Noeud* tete){
	struct Noeud* courant = tete;
	struct Noeud* temp;
	while(courant != NULL){
		temp = courant->suivant;
		free(courant);
		courant=temp;
	}
}

int main(void){
	struct Noeud* tete=NULL;
	
	tete = AjouterEntete(tete,5);
	tete = AjouterEntete(tete,3);
	tete = AjouterEntete(tete,9);
	tete = AjouterEntete(tete,4);
	tete = AjouterEntete(tete,1);
	tete = AjouterEntete(tete,8);
	
	printf("Liste: ");
	afficher(tete);
	
	liberer(tete);
	
	return 0;
}

