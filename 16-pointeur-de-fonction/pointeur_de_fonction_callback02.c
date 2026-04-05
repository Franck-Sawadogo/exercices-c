#include<stdio.h>
#include<stdlib.h>

float addition(float a, float b){
	return a+b;
}

float soustraction(float a, float b) {
	return a-b;
}

float multiplication(float a, float b){
	return a*b;
}

void calcul(float a, float b, float(*f)(float,float)){
	printf("resultat: %.2f\n",f(a,b));
}

int main(void) {
	float a,b;
	
	printf("Entrez les nombres: ");
	scanf("%f%f",&a,&b);
	
	calcul(a, b, addition);
	calcul(a, b, soustraction);
	calcul(a, b, multiplication);
	
	return 0;
}