#include<stdio.h>

int compare(int num1,int num2,int num3)
{
    if(num1>num2&&num1>num3)
        return num1;
    else if(num2>num1&&num2>num3)
        return num2;
    else
        return num3;
}
int main(void)
{
    int num1,num2,num3;
    printf("세 정수를 입력하시오. :\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("%d,%d,%d중 가장 큰 수는 %d이다\n",num1,num2,num3,compare(num1,num2,num3));
    return 0;
}
