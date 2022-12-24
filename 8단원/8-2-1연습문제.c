#include<stdio.h>

int main(void)
{
    int a=1,b=2;
    for(;a<10;a++)
    {
        if(a%2!=0)
            continue;
        for(b=2;b<10;b=b+2)
        {
            if(b%2!=0||b>a)
                break;
            printf("%d단 구구단:%dX%d=%d\n",a,a,b,a*b);
        }
    }
    return 0;
}