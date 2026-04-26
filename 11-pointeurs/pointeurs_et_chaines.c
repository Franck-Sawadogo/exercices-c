#include<stdio.h>
#include<stdlib.h>
int main(void) {
    char mot[100];
    char* p = mot;
    int i =0;
    int nbre = 0;
    
    printf("Entrez le mot: ");
    scanf("%s",mot);
    
    while(*(p+i) != '\0') {
    	nbre += 1;
    	i++;
	}
	
	printf("Nombre de caractères: %d",nbre);
    return 0;
}
