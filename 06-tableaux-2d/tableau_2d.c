#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	int note[3][3];
	float moyE;
	float moyC;
	float somMoy=0;
	float tabMoy[0];
	
	for(int i=0;i<=2;i++) {
		int somE=0;
		for(int j=0;j<=2;j++) {
			printf("Entrez les notes de l'etudiant %d: ",i+1);
			scanf("%d",&note[i][j]);
			somE += note[i][j];
		}
		moyE = (float)somE/3;
		somMoy += moyE;	
		printf("moyenne de l'elève %d: %.2f\n",i+1,moyE);
		printf("\n");
	}
	
	moyC = (float)somMoy/3;
	printf("Moyenne de la classe: %.2f \n",moyC);
	
	
	return 0;
}