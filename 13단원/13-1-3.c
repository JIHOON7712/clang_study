#include<stdio.h>

int main(void)
{
    int arr[5]={1,2,3,4,5};
    int* ptr=arr+4;
    int sum=0;
    for(int i=4;i>=0;i--)
    {
        sum+=*(arr+i);
    }
    printf("%d\n",sum);
}