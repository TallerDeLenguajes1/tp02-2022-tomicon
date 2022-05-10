// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// #define N 5
// #define M 7
// int main(){
//     srand((int)time(NULL));
//     int i,j, *punt;
//     int mt[N][M];
//     punt= &mt[0][0];
//     for(i = 0;i<N*M; i++)
//     {
//     *punt=1+rand()%100;
//     punt++;
//     printf("%d ", *punt);
//     if (i % M ==0){
//         printf("\n");
//     }
//     }
//     return 0
// }


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5
#define M 7
int main(){
    srand((int)time(NULL));
    int i,j, *punt;
    int mt[N][M];
    punt= &mt[0][0];
    for(i = 1;i<=N*M; i++)
    {
    *punt=1+rand()%100;
    printf("%d ", *punt);
    punt++;
    if (i % M ==0){
        printf("\n");
    }
    }
    return 0;
}