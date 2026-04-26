#include<stdio.h>
#include<stdlib.h>
int main(void) 
{
	int lignes,colones;
	
	printf("Entrez le nombre de lignes: ");
	scanf("%d",&lignes);
	printf("Entrez le nombre de colone: ");
	scanf("%d",&colones);
	
	int tab[lignes][colones];
	
	for(int i=0;i<lignes;i++) {
		for(int j=0;j<colones;j++) {
			printf("Entrez le nombre [%d][%d]: ",i,j);
			scanf("%d",&tab[i][j]);
		}
	}
	
	printf("\n-----Tableau-----\n");
	for(int i=0;i<lignes;i++) {
		for(int j=0;j<colones;j++) {
			printf("%d ",tab[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
