#include<stdio.h>

void cal(int);

int main(void)
{
    int n;
    printf("��� n�Է� :");
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
            printf("������ �����ϴ� k�� �ִ��� %d\n",k);
            break;
        }
    }
}