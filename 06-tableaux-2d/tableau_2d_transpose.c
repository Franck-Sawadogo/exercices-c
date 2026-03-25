#include<stdio.h>
#include<stdlib.h>
int main() {
		int tab[3][3];
		
		for(int i=0;i<=2;i++){
			for (int j=0;j<=2;j++) {
				printf("Entrez [%d][%d]: ",i,j);
				scanf("%d",&tab[i][j]);
			}
		}
		
		for(int i=0;i<=2;i++) {
			for(int j=0;j<=2;j++) {
				printf("%d ",tab[j][i]);
			}
			printf("\n");
		}
		
    return 0;
}