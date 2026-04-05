#include<stdio.h>
#include<stdlib.h>

int carre(int a) {
	return a*a;
}

int main(void) {
	int x;
	printf("Entrez x: ");
	scanf("%d",&x);
	
	int (*ops)(int);
	ops = carre;
	
	printf("Resultat: %d",ops(x));
	
	return 0;
}