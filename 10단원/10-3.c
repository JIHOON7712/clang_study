#include<stdio.h>

void gcd(int,int);
int inp1,inp2;


int main(void)
{
    printf("두 정수를 입력하시오.:");
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
            printf("%d와 %d의 최대공약수는 %d입니다.",inp1,inp2,z);
        else if(z==0)
            printf("%d와 %d의 최대공약수는 %d입니다.",inp1,inp2,y);
        else
        {
            gcd(y,z);
        }
    }
    else
    {
        int z=y%x;
        if(y==0)
            printf("%d와 %d의 최대공약수는 %d입니다.",inp1,inp2,z);
        else if(z==0)
            printf("%d와 %d의 최대공약수는 %d입니다.",inp1,inp2,x);
        else
        {
            gcd(x,z);
        }
    }
}