#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int tab1[5];
    int tab2[5];

    for(int i = 0; i <= 4; i++) {
        printf("Entrez le nombre %d: ", i+1);
        scanf("%d", &tab1[i]);
    }

    for(int i = 0; i <= 4; i++) {  
	    tab2[i] = tab1[i];
    }

    for(int i = 0; i <= 4; i++) {
        printf("Tableau 1: %d\n", tab1[i]);
        printf("Tableau 2: %d\n", tab2[i]);
    }

    return 0;
}