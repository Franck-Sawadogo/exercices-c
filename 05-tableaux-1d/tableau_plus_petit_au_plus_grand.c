#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int tab[5];
	int temp;
	
	for(int i=0; i<=4;i++) {
		printf("Entrez le nombre %d: ",i+1);
		scanf("%d",&tab[i]);
	}
	
	for(int i=0;i<=4;i++) {
		for(int j=0;j<4-i;j++) {
			if(tab[j]>tab[j+1]){
				temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
		}
	}
	printf("Classement: ");
	
	for(int i=0;i<=4;i++) {
		printf("%d",tab[i]);
	}
	
	return 0;
}

