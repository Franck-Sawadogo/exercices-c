#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Etudiant {
	char nom[50];
	int age;
	float moyenne;
};

int main(void) 
{
	struct Etudiant classe[3],elu;
	float fort_moy;
	
	for(int i=0;i<=2;i++) {
		printf("Le nom de l'etudiant %d: ",i+1);
		scanf("%s",classe[i].nom);
		printf("Son age: ");
		scanf("%d",&classe[i].age);
		printf("Sa moyenne: ");
		scanf("%f",&classe[i].moyenne);
		printf("\n");
	}
	
	
	if(classe[0].moyenne>classe[1].moyenne && classe[0].moyenne>classe[2].moyenne){
		strcpy(elu.nom, classe[0].nom);
		fort_moy = classe[0].moyenne;
	} else if (classe[1].moyenne>classe[0].moyenne && classe[1].moyenne>classe[2].moyenne){
		strcpy(elu.nom, classe[1].nom);
		fort_moy = classe[1].moyenne;
	} else {
		strcpy(elu.nom, classe[2].nom);
		fort_moy = classe[2].moyenne;
	}
	
	printf("\n====BULLETIN====\n");
	printf("%s | %d ans | %.2f\n",classe[0].nom,classe[0].age,classe[0].moyenne);
	printf("%s | %d ans | %.2f\n",classe[1].nom,classe[1].age,classe[1].moyenne);
	printf("%s | %d ans | %.2f\n",classe[2].nom,classe[2].age,classe[2].moyenne);
    printf("================\n");
    printf("\n");
	
	printf("Meilleure Moyenne: %s - %.2f",elu.nom,fort_moy);
	printf("\n");
	
	return 0;
}