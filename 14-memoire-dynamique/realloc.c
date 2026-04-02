#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	
	int* tab =malloc(3 * sizeof(int));
	if(tab==NULL) {
		printf("Erreur allocations");
		return 1;
	}
	
	for(int i=0;i<3;i++) {
		printf("Entrez entier %d: ",i+1);
		scanf("%d",&tab[i]);
	}
	
	tab = realloc(tab, 6*sizeof(int));
	if(tab==NULL) {
		printf("Erreur realloc\n");
		return 1;
	}
	
	for(int i=3;i<6;i++) {
		printf("Entrez entier %d: ",i+1);
		scanf("%d",&tab[i]);
	}
	
	for(int i=0;i<6;i++) {
		printf("%d ",tab[i]);
	}
	
	free(tab);
	tab = NULL;
	
	return 0;
}