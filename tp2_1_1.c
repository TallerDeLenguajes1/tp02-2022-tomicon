#define N 20
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    srand((int)time(NULL));
    double *vt;
    vt= malloc(sizeof(double)*N);
    for(i = 0;i<N; i++)
    {
        *vt= 1+rand()%100;
        printf("%f ", vt[i]);
        vt++;
    }    
}

