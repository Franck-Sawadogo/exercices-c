#include<stdio.h>
#include<stdlib.h>

int carre(int a) { return a*a; }

int doubler(int a){	return a*2; }

void parcourir(int* tab, int taille, int(*f)(int) ){
	for(int i=0;i<taille;i++) {
		printf("%d ",f(tab[i]));
	}
}

int main(void) {
	int tab[5];
	
	for(int i=0;i<5;i++) {
		printf("Entrez %d: ",i+1);
		scanf("%d",&tab[i]);
	}
	
	printf("Doubles: ");
	parcourir(tab, 5, doubler);
	
	printf("\ncarre: ");
	parcourir(tab, 5, carre);
	
	return 0;
}