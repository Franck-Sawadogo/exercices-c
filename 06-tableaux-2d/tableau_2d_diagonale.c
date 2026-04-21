#include<stdio.h>
#include<stdlib.h>
int main(void)
 {
	int tab[4][4];
	
 	for (int i=0; i<=3;i++) {
 		for(int j=0;j<=3;j++) {
 			printf("Entrez [%d][%d]: ",i,j);
 			scanf("%d",&tab[i][j]);
		 }
	 }
 	
 	for(int i=0;i<=3;i++) {
 		for(int j=0;j<=3;j++) {
 			if(i==j) {
 			printf("%d ",tab[i][j]);
 		}
		 }
	 }
 	
	return 0;
 }
