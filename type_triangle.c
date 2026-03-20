#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,b,c;
	printf("Entrez les 3 côtés: ");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a==b && a==c) {
		printf("Triangle équilatéral");
	} else if (a==b || a==c || b==c) {
		printf("Isocèle");
	} else {
		printf("Quelconque");
	}
	return 0;
} 