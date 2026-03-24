#include<stdio.h>
#include<stdlib.h>

float CalculerMoyenne(int tab[], int taille) {
	int somme = 0;
	for(int i=0;i<taille; i++) {
		somme = somme + tab[i];
	}
	return (float) somme/taille;	
}

int main(void) 
{
	int notes[5];
	float moy;
	
	for(int i=0; i<5; i++) {
		printf("Entrez la note %d: ",i+1);
		scanf("%d",&notes[i]);
		}	
		
	moy = CalculerMoyenne(notes,5);
	printf("Moyenne: %.2f", moy);
	return 0;
}