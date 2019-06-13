#include<stdio.h>
#include<stdlib.h>
int main(){
    double *ptr[100000];
    int multilplier = 10000;
    for(int i=0;i<100000;++i)
        ptr[i] = (double*)calloc(multilplier, sizeof(double));
    char ch = getc(stdin);
    free(ptr[100000]);
    return 0;
}
