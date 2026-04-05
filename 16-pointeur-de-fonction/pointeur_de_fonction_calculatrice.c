#include<stdio.h>
#include<stdlib.h>

void AfficherMenu() {
    printf("=====MENU====\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Quitter\n");
    printf("=================\n");
}

float addition(float a, float b){
	return a+b;
}

float soustraction(float a, float b) {
	return a-b;
}

float multiplication(float a, float b){
	return a*b;
}

float division(float a, float b){
	if(b==0){
		printf("Division par zero impossible");
	} 
		return (float)a/b;
}

int main(void) {
	
	int choix,x,y;
	
	AfficherMenu();
	
	printf("Votre Choix: ");
	scanf("%d",&choix);
	
	if(choix==5){
		return 0;
	}
	
	printf("Entrez les nombres: ");
	scanf("%d%d",&x,&y);
	
	float (*operation[4])(float,float) = {addition, soustraction, multiplication, division};
	
	printf("resultat: %.2f",operation[choix-1](x,y));
	
	return 0;
}

