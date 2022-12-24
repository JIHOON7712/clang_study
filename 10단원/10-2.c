#include<stdio.h>

void multi(int,int);

int main(void)
{
    int inp1,inp2;
    printf("두 정수를 입력하시오.: ");
    scanf("%d %d",&inp1,&inp2);
    multi(inp1,inp2);
}

void multi(int x,int y)
{
    int z;
    if(x<=y)
    {
        for(;x<=y;x++)
        {
            for(z=1;z<10;z++)
            {
                printf("%dX%d=%d\n",x,z,x*z);
            }
        }
    }
    else
    {
        for(;y<=x;y++)
        {
            for(z=1;z<10;z++)
            {
                printf("%dX%d=%d\n",y,z,y*z);
            }
        }
    }
}