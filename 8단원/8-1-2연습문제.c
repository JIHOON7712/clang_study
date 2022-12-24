#include<stdio.h>

int main(void)
{
    int inp1,inp2,bigger,smaller;
    printf("숫자2개:");
    scanf("%d %d",&inp1,&inp2);
    bigger=inp1>inp2?inp1:inp2;
    smaller=inp1<inp2?inp1:inp2;
    printf("차이는 %d.\n",bigger-smaller);
    return 0;
}