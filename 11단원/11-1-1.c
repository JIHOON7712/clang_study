#include<stdio.h>

int main(void)
{
    int i=0,num[5],max,min,sum;
    printf("5개의 정수를 입력하시오.: ");
    for(;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    
    max=num[0],min=num[0],sum=0;
    
    for (i=1;i<5;i++)
    {
        if(num[i-1]<num[i])
            max=num[i];
    }
    printf("입력된 정수 중에서 최댓값 :%d\n",max);

    for (i=1;i<5;i++)
    {
        if(num[i-1]>num[i])
            min=num[i];
    }
    printf("입력된 정수 중에서 최솟값 :%d\n",min);

    for (i=0;i<5;i++)
    {
        sum+=num[i];
    }
    printf("입력된 정수의 총합 :%d\n",sum);
}