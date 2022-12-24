#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int  main(void)
{
    srand((int)time(NULL));
    printf("Frist Dice :%d\n",(rand()%6)+1);
    printf("Second Dice : %d",(rand()%6)+1);
}