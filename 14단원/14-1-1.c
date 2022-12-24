#include<stdio.h>
int SquareByValue(int);
void SquareByReference(int*);

int main(void)
{
    int num;
    printf("숫자를 입력하시오 :");
    scanf("%d",&num);
    int squarenum=SquareByValue(num);
    SquareByReference(&num);
    printf("%d\n",squarenum);
    printf("%d\n",num);
}

int SquareByValue(int i)
{
    i=i*i;
    return i;
}

void SquareByReference(int* ptr)
{
    *ptr=(*ptr)*(*ptr);
}