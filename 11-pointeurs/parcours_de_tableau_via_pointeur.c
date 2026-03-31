#include<stdio.h>
#include<stdlib.h>

void somme(int* tab) {
	int som = 0;
	for(int i=0;i<5;i++) {
	som += *(tab+i);
	}
	printf("Somme: %d\n",som);
} 

void Max(int* tab) {
	int max = *tab;
	for(int i=0;i<5;i++) {
		if( *(tab+i) > max ) {
			max = *(tab+i);
		}
	}
	printf("Max: %d\n",max);
}

void Min(int* tab) {
	int min = *tab;
	for(int i=0;i<5;i++) {
		if( *(tab+i) < min ) {
			min = *(tab+i);
		}
	}
	printf("Min: %d\n",min);
}

int main(void) {
	int notes[5];
	
	for(int i=0;i<5;i++) {
		printf("Entrez le nombre %d: ",i+1);
		scanf("%d",&notes[i]);
	}
	
	somme(notes);
	Max(notes);
	Min(notes);
	
	return 0; 
}

