#include<stdio.h>

int main(void)
{
    int inp,num[8],i=0,p;
    printf("Insert the number: ");
    scanf("%d",&inp);
    while(inp>=2)
    {
        num[i]=inp%2;
        inp=inp/2;
        i++;
    }
    num[i]=inp;
    for(p=i;p>=0;p--)
    {
        printf("%d",num[p]);
    }
    printf("\n");
}