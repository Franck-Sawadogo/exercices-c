#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int note[3][3];
    float moyE;
    float moyC;
    float somMoy = 0;
    float tabMoy[3];

    // Boucle 1 — remplir les notes et calculer les moyennes
    for(int i=0; i<=2; i++) {
        int somE = 0;
        for(int j=0; j<=2; j++) {
            printf("Entrez la note %d de l'etudiant %d: ", j+1, i+1);
            scanf("%d", &note[i][j]);
            somE += note[i][j];
        }
        moyE = (float)somE / 3;
        tabMoy[i] = moyE;
        somMoy += moyE;
        printf("Moyenne de l'eleve %d: %.2f\n\n", i+1, moyE);
    }

    // Après boucle 1 — tabMoy est rempli
    float max = tabMoy[0];
    float min = tabMoy[0];

    // Boucle 2 — chercher max et min
    for(int i=1; i<=2; i++) {
        if(tabMoy[i] > max) max = tabMoy[i];
        if(tabMoy[i] < min) min = tabMoy[i];
    }

    moyC = (float)somMoy / 3;
    printf("Moyenne de la classe : %.2f\n", moyC);
    printf("Plus forte moyenne   : %.2f\n", max);
    printf("Plus faible moyenne  : %.2f\n", min);

    return 0;
}
