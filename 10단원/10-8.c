#include<stdio.h>

void cal(int);

int main(void)
{
    int input,result;
    printf("���� �Է�: ");
    scanf("%d",&input);
    cal(input);
}

void cal(int x)
{
    int y,k=1;
    for(y=1;y<=x;y++)
        k=k*2;
    printf("2�� %d���� %d",x,k);
}