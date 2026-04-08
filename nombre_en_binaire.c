#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    
    for(int i=31;i>=0;i--){
    	if (n & (1 << i)){
    		printf("1");
		} else {
			printf("0");
		}
		if(i % 8 == 0) printf(" ");
	}
	
    return 0;
}