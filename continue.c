#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	for(int i=0;i<=20;i++) {
		if(i%3==0) {
			continue;
		}
		printf("%d\n",i);
	}
	
	return 0;
}
