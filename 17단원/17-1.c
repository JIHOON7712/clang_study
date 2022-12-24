#include<stdio.h>

void MaxAndMin(int**,int**,int*);

int main(void)
{
    int * maxPtr=0;
    int * minPtr=0;
    int arr[5];
    for(int i=0;i<5;i++){
        printf("%d번 째 번호를 입력하시오: ",i+1);
        scanf("%d",&arr[i]);
    }
    MaxAndMin(&maxPtr,&minPtr,arr);
    printf("%d %d",*maxPtr,*minPtr);
}

void MaxAndMin(int** p1,int** p2,int a[])
{
    *p1=&a[0],*p2=&a[0];
    for(int i=1;i<5;i++)
    {
        if(**p1<a[i])
        {
            *p1=&a[i];
        }
        else if(**p2>a[i])
        {
            *p2=&a[i];
        }
        else
        {
            continue;
        }
    }
}