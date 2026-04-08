#include <stdio.h>
#include<stdio.h>

int Compter(int n){
	int count = 0;
	while(n != 0){
		if(n & 1) count++;
		n = n >> 1;
	}
	return count;
}

int main(void) {
	
	printf("13 = %d X 1\n",Compter(13));
	printf("8 =  %d X 1\n",Compter(8));
	printf("17 = %d X 1\n",Compter(17));
	printf("24 = %d X 1\n",Compter(24));
	
	return 0;
}
