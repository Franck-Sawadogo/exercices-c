#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float r,aire;
	printf("Entrez le rayon r(en cm) : ");
	scanf("%f",&r);
	aire = 3.14 * r * r;
	printf("L'aire de ce cercle est de: %f",aire);
	return 0;
}
