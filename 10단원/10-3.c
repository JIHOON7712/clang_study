#include<stdio.h>

void gcd(int,int);
int inp1,inp2;


int main(void)
{
    printf("�� ������ �Է��Ͻÿ�.:");
    scanf("%d %d",&inp1,&inp2);
    gcd(inp1,inp2);
}

void gcd(int x,int y)
{
    int z;
    if(x>=y)
    {
        int z=x%y;
        if(x==0)
            printf("%d�� %d�� �ִ������� %d�Դϴ�.",inp1,inp2,z);
        else if(z==0)
            printf("%d�� %d�� �ִ������� %d�Դϴ�.",inp1,inp2,y);
        else
        {
            gcd(y,z);
        }
    }
    else
    {
        int z=y%x;
        if(y==0)
            printf("%d�� %d�� �ִ������� %d�Դϴ�.",inp1,inp2,z);
        else if(z==0)
            printf("%d�� %d�� �ִ������� %d�Դϴ�.",inp1,inp2,x);
        else
        {
            gcd(x,z);
        }
    }
}