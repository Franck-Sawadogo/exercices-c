#include<stdio.h>
#include<stdlib.h>

#define TAILLE 10
#define MOITIE(x) ((x)/2.0)

int main(void) {
	
	int tab[TAILLE];
	
	for(int i=0;i<TAILLE;i++) {
		printf("Entrez un entier: ");
		scanf("%d",&tab[i]);
	}
	
	for(int i=0;i<TAILLE;i++) {
		printf("%.2f ",MOITIE(tab[i]));
	}
	
	return 0;
}