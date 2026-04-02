#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	char mot[100];
	
	printf("mot: ");
	scanf("%s",mot);
	
	char* tab = malloc(strlen(mot) * sizeof(char));
	if(tab==NULL) {
		printf("Erreur allocation\n");
		return 1;
	}
	
	strcpy(tab, mot);
	for(int i=strlen(tab)-1;i>=0;i--){
		printf("%c",tab[i]);
	}
	
	free(tab);
	tab = NULL;
	
	return 0;
}