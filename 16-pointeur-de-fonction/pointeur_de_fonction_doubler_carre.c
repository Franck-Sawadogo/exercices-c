#include<stdio.h>
#include<stdlib.h>

int doubler(int x) { return x*2; }
int carre(int x)   { return x*x; }

void appliquerTableau(int* tab, int taille, int(*f)(int)) {
    for(int i=0; i<taille; i++) {
        printf("%d ", f(tab[i]));
    }
    printf("\n");
}

int main(void) {
    int tab[5];

    for(int i=0; i<5; i++) {
        printf("Entrez %d: ", i+1);
        scanf("%d", &tab[i]);
    }

    printf("Doubles : ");
    appliquerTableau(tab, 5, doubler);

    printf("Carres  : ");
    appliquerTableau(tab, 5, carre);

    return 0;
}