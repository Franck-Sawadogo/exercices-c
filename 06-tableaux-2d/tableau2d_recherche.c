#include<stdio.h>
#include<stdlib.h>
int main() {
	
		int tab[3][3];
		int nombre;
		for(int i=0;i<=2;i++){
			for (int j=0;j<=2;j++) {
				printf("Entrez [%d][%d]: ",i,j);
				scanf("%d",&tab[i][j]);
			}
		}
		
		printf("Entrez le nombre à rechercher: ");
		scanf("%d",&nombre);
		
		for(int i=0;i<=2;i++) {
			for(int j=0;j<=2;j++) {
				if(nombre == tab[i][j]) {
					printf("Nombre %d trouvé à la position [%d][%d]",nombre,i,j);
				} 
			}
		}
		
    return 0;
}
