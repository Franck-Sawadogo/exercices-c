#include<stdio.h>
#include<stdlib.h>

void Affichermenu() {
	printf("====MENU====\n");
	printf("1. Addition\n");
	printf("2. Soustraction\n");
	printf("3. Quitter\n");
	printf("===============\n");
}

int addition(int a, int b) {
	return a+b;
}

int soustraction(int a, int b) {
	return a-b;
}

int main(void) 
{
	int a,b,choix;
	while(1) {
	Affichermenu();
	printf("Entrez votre choix: ");
	scanf("%d",&choix);
	
	
	
	switch(choix) { 
        case 1 :
        	printf("Entrez deux nombres: ");
			scanf("%d%d",&a,&b);
        	printf("Le résultat est: %d\n",addition(a,b));
        	break;
        case 2 :
        	printf("Entrez deux nombres: ");
			scanf("%d%d",&a,&b);
        	printf("Le résultat est: %d\n", soustraction (a,b));
        	break;
        case 3 :
        	printf("Au revoir.\n");
        	return 0;
        default:
        	printf("Choix invalide\n");
	}
  }
  return 0;
}
