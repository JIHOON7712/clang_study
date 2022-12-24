#include<stdio.h>

int main(void)
{
    int num=1,rem1,rem2;
    for(;num<101;num++)
    {
        rem1=num%7,rem2=num%9;
        if(rem1==0&&rem2!=0)
            printf("%d\n",num);
        else if(rem1!=0&&rem2==0)
            printf("%d\n",num);
        else
            printf("\n");        
    }
    return 0;
}