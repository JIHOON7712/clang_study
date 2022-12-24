#include<stdio.h>

int main(void)
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    for(int i=0;i<=4;i++)
    {
        *(ptr+i)=*(ptr+i)*2;
        printf("%d\n",*(ptr+i));
    }
}