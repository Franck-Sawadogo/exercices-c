#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float vitesse_en_kilo_heure;
	float vitesse_en_metre_par_seconde;
	
	printf("Entrez la vitesse en km/h: ");
	scanf("%f",&vitesse_en_kilo_heure);
	
	vitesse_en_metre_par_seconde = vitesse_en_kilo_heure/3.6;
	
	printf("Cette vitesse en m/s est de: %.2f m/s",vitesse_en_metre_par_seconde);
	 
	return 0;
}
