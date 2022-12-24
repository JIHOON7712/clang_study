#include<stdio.h>

void cal(int);

int main(void)
{
    int n;
    printf("상수 n입력 :");
    scanf("%d",&n);
    cal(n);
}

void cal(int n)
{
    int k=1, mod=1;
    for(;;k++)
    {
        mod=mod*2;
        if(mod>n)
        {
            k=k-1;
            printf("공식을 만족하는 k의 최댓값은 %d\n",k);
            break;
        }
    }
}