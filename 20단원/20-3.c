#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("Range of random number if 0 to %d\n", RAND_MAX);
    for(int i=0;i<5;i++){
        printf("Random number : %d\n", rand()%100);
    }
    return 0;
}
