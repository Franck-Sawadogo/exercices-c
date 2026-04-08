#include <stdio.h>
#include <stdlib.h>

void verifier(int n) {
    if(n>0 && (n & (n - 1)) == 0) {
        printf("Vrai\n");   
    } else {
        printf("Faux\n");   
    }
}

int main() {
    int n;

    printf("Entrez n: ");
    scanf("%u", &n);
    verifier(n);
    
    return 0;
}