#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int tab[3][3];
	
	for(int i=0;i<=2;i++) {
		for(int j=0;j<=2;j++) {
			printf("Entrez le nombre [%d][%d]: ",i,j);
			scanf("%d",&tab[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<=2;i++) {
		int som = 0;
		for(int j=0;j<=2;j++) {
			som += tab[i][j];
		}
		printf("Somme %d: %d\n",i+1,som);
	}
		
	return 0;
}