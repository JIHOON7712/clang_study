#include<stdio.h>

int main(void)
{
    int num[10],res[10],j=0,k=9;
    printf("Insert  ten numbers :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]%2==0){
            res[k]=num[i];
            k--;
        }
        else{
            res[j]=num[i];
            j++;
        }
    }
    for(int q=0;q<10;q++)
    {
        printf("%d ",res[q]);
    }
}