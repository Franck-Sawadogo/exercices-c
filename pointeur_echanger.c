#include<stdio.h>
#include<stdlib.h>
void echanger(int* a, int* b) {
	int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int a = 5;
    int b = 10;
    
    printf("a= %d, b= %d\n",a,b);
    echanger(&a,&b);
    printf("a= %d, b= %d",a,b);
    
    return 0;
}