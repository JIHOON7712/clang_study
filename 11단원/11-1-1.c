#include<stdio.h>

int main(void)
{
    int i=0,num[5],max,min,sum;
    printf("5���� ������ �Է��Ͻÿ�.: ");
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
    printf("�Էµ� ���� �߿��� �ִ� :%d\n",max);

    for (i=1;i<5;i++)
    {
        if(num[i-1]>num[i])
            min=num[i];
    }
    printf("�Էµ� ���� �߿��� �ּڰ� :%d\n",min);

    for (i=0;i<5;i++)
    {
        sum+=num[i];
    }
    printf("�Էµ� ������ ���� :%d\n",sum);
}