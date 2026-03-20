#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int mois;
	printf("Entrez le mois: ");
	scanf("%d",&mois);
	if(mois==4 || mois==6 || mois==9 ||mois==11) {
		printf("Le mois %d a 30 jours.",mois);
	} else if(mois==1 || mois==3 || mois==5 || mois==7 || mois==8 || mois==10 || mois==12) {
		printf("Le mois %d a 31 jours.",mois);
	} else if(mois==2) {
        printf("Le mois %d a 28 ou 29 jours.",mois);
    } else {
        printf("Mois invalide !");
    }
	
	return 0;
} 