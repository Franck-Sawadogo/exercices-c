#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,b,c;
	
	printf("Entrez la mesure d'un côté: ");
	scanf("%f",&a);
	
	printf("Entrez la mesure de l'autre côté: ");
	scanf("%f",&b);
	
	c = sqrt(a*a + b*b);
	
	printf("L'hypothénuse est de: %.2f",c);
	 
	return 0;
} 