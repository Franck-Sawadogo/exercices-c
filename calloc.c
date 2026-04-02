#include<stdio.h>
#include<stdlib.h>

int main(void) {
	
	int* tab = calloc(5,sizeof(int));
	if(tab==NULL) {
		printf("Erreur calloc\n");
		return 1;
	}
	
	for (int i=0;i<5;i++) {
		printf("%d",tab[i]);
	}
	
	printf("\n");
	for(int i=0;i<5;i++) {
		printf("Entrez %d: ",i+1);
		scanf("%d",&tab[i]);
	}
	
	for (int i=0;i<5;i++) {
		printf("%d",tab[i]);
	}
	
	free(tab);
	tab = NULL;
	
	return 0;
}