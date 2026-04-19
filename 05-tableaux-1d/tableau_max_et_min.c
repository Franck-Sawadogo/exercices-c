#include<stdio.h>
#include<stdlib.h>

int TrouverMax(int tab[]) {
	int max = tab[0];	
	for (int i=1; i<5; i++) {
		if(tab[i] > max) {
   		    max = tab[i];
		}
	}
	return max;
}

int TrouverMin(int tab[]) {
	int min = tab[0];	
	for (int i=1; i<5; i++) {
		if(tab[i] < min) {
   			min = tab[i];
		}
	}
	return min;
}

int main(void)
{
	int notes[5];
	
	for(int i=0; i<5; i++) {	
		printf("Entrez la note %d: ",i+1);
		scanf("%d",&notes[i]);
	}

	printf("Le max est: %d\n",TrouverMax(notes));
	printf("Le minimum est: %d\n",TrouverMin(notes) );
	
	return 0;
}
