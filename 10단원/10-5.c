#include<stdio.h>

int main(void)
{
    int i=2,j=2,count=0;
    for(;;i++)
    {
        for(j=2;j<=i;j++)
            {
                if(i==j)
                {
                    printf("%d\n",i);
                    count++;
                }
                if(i%j==0)
                    break;
            }
        if(count==10)
            break;
    }    
            
}
