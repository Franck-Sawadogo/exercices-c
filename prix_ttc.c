#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float prix_ht;
	float prix_ttc;
	float tva;
	
	printf("Entrez le prix Hors Taxe(HT): ");
	scanf("%f",&prix_ht);
	
	printf("Entrez le porcentage de la TVA: ");
	scanf("%f",&tva);
	
	prix_ttc = prix_ht * (1 + (tva/100));
	
	printf("Le prix TTC est de: %.2f",prix_ttc);
	 
	return 0;
}