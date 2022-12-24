#include<stdio.h>
void swap(int*,int*,int*);

int main(void)
{
    int num1,num2,num3;
    printf("세 정수를 입력하시오. :");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("%d %d %d",num1,num2,num3);
    swap(&num1,&num2,&num3);
    printf(" %d %d %d",num1,num2,num3);
}

void swap(int* i,int* j,int* k)
{
    int tmp;
    tmp=*i;
    *i=*j;
    *j=*k;
    *k=tmp;
}