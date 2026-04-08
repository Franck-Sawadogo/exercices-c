#include <stdio.h>
#include<stdlib.h>

void activerBit(int* n, int pos) {
    *n = *n | (1 << pos);
}

void desactiverBit(int* n, int pos) {
    *n = *n & ~(1 << pos);
}

int main() {
    int x = 5;  // 101 en binaire
    
    printf("Avant : %d (binaire: 101)\n", x);
    
    activerBit(&x, 1);      // Active bit 1 → 111 (7)
    printf("Après activer bit 1: %d\n", x);
    
    desactiverBit(&x, 0);   // Désactive bit 0 → 110 (6)  
    printf("Après désactiver bit 0: %d\n", x);
    
    return 0;
}