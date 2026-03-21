#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	for (int i=0; i<=100; i++) {
		if(i%2==0) {
			printf("%d\n",i);
		}
	}
	return 0;
} 