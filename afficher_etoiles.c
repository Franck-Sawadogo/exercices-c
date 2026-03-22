#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void afficherEtoiles(int n) {
	for (int i=0; i<n; i++) {
		printf("*");
	}
	printf("\n");
}

int main(void) {
	int n;
	printf("Entrez le nombre d'étoiles à afficher: ");
	scanf("%d",&n);
	afficherEtoiles(n);
	return 0;
}