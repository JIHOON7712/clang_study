#include<stdio.h>

void Fibo(int);

int main(void)
{
    int count;
    printf("�� ��° �Ǻ���ġ ������ ���Ͻó���?:");
    scanf("%d",&count);
    Fibo(count);
}

void Fibo(int count)
{
    int f1=0,f2=1,num,i;
    for(num=1;num<=count;num++)
    {
        if(num==1)
            printf("%d\n",f1);
        else if(num==2)
            printf("%d\n",f2);
        else if(num>=3)
        {
            i=f2+f1;
            printf("%d\n",i);
            f1=f2;
            f2=i;
        }
    } 
}