#include<stdio.h>
#include<stdlib.h>

#define PAIR(x) ((x)%2==0)

int main(void) {
	int tab[6];
	
	for(int i=0;i<6;i++){
		printf("Entrez entier: ");
		scanf("%d",&tab[i]);
	}
	
	for(int i=0;i<6;i++){
		if(PAIR(tab[i])) {
			printf("%d",tab[i]);
		}
	}
	
	return 0;
}