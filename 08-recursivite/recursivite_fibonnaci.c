#include<stdio.h>
#include<stdlib.h>

int fibonnaci(int n) {
	if(n==0) return 0;
	if (n==1) return 1;
	return fibonnaci(n-1) + fibonnaci(n-2);
}

int main(void) 
{
	int n;
	printf("Entrez n: ");
	scanf("%d",&n);
	printf("Le nième chiffre de fibonacci est: %d\n",fibonnaci(n));
	
	return 0;
}

// 0 1 1 2 3 5 8 13 21 34 55 89 ...