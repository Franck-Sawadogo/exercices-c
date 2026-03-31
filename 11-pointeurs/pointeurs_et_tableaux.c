#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int tab[5] = {10, 20, 30, 40, 50};
    int* p = tab;
    int som = 0;
    
    for(int i=0;i<5;i++) {
    	som += *(p+i);
	}
    printf("La somme est: %d",som);
    return 0;
}