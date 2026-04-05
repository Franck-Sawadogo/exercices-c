#include<stdio.h>
#include<stdlib.h>

int croissant(int a, int b)   { return a > b; }
int decroissant(int a, int b) { return a < b; }

void trier(int* tab, int taille, int(*comparer)(int, int)) {
    int temp;
    for(int i=0; i<taille; i++) {
        for(int j=0; j<taille-1; j++) {
            if(comparer(tab[j], tab[j+1])) {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}

int main(void) {
    int tab[5];

    for(int i=0; i<5; i++) {
        printf("Entrez %d: ", i+1);
        scanf("%d", &tab[i]);
    }

    trier(tab, 5, croissant);
    printf("Croissant   : ");
    for(int i=0; i<5; i++) {
        printf("%d ", tab[i]);
    }

    printf("\n");

    trier(tab, 5, decroissant);
    printf("Decroissant : ");
    for(int i=0; i<5; i++) {
        printf("%d ", tab[i]);
    }

    printf("\n");

    return 0;
}