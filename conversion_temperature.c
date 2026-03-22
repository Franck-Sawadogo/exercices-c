#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void AfficherMenu() {
	printf("=======MENU DE CONVERTION=====\n");
	printf("1. Celcius en Fahrenheit\n");
	printf("2. Fahrenheit en Celcius\n");
	printf("3. Quitter\n");
	printf("=========================\n");
}

float convertirCelsius(float a) {
	return (a * 9/5) + 32;
}

float convertirFahrenheit(float b) {
	return (b - 32) * 5/9;
}

int main(void) 
{
	float F,C;
	int choix;
	
	while(1) {
		AfficherMenu();
		printf("Entrez votre choix: ");
		scanf("%d",&choix);
		
		if(choix==3) {
			printf("Au revoir !");
			break;
		} else if (choix==1) {
			printf("Entrez la valeur en celcius: ");
			scanf("%f",&C);
			printf("La valeur en Fahrenheit: %.2f\n",convertirCelsius(C));
		} else if(choix==2) {
			printf("Entrez la valeur en Fahrenheit : ");
			scanf("%f",&F);
			printf("La valeur en Celcius: %.2f\n",convertirFahrenheit(F));
		} else {
			printf("Choix invalide !");
		}	
	}
	
    return 0;
}