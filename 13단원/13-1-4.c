#include<stdio.h>

int main(void)
{
    int arr[6]={1,2,3,4,5,6};
    int* fro=arr;
    int *end=arr+5;
    int temp;

    for(int i=0;i<3;i++)
    {
        
        temp=*(fro+i);
        *(fro+i)=*(end-i);
        *(end-i)=temp;
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",*arr,*(arr+1),*(arr+2),*(arr+3),*(arr+4),*(arr+5),*arr+6);
}