#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int tab[6];
	
	for(int i=0;i<=5;i++) {
	printf("Entrez le nombre %d: ",i+1);
	scanf("%d",&tab[i]);	
	}
	
	printf("Les nombres pairs sont: ");
	for(int i=0;i<=5;i++) {
		if(tab[i]%2==0) {
			printf("%d ", tab[i]);
		}
	}
	return 0;
}