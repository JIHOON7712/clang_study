#include<stdio.h>

int main(void)
{
    int input;
    printf("정수를 입력하시오.: ");
    scanf("%d",&input);
    printf("이 정수에 해당하는 16진수는 %x입니다.\n",input);
    return 0;
}