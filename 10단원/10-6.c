#include <stdio.h>

void change(int);

int main(void)
{
    int sec;
    printf("�ʸ� �Է��Ͻÿ�.: ");
    scanf("%d",&sec);
    change(sec);
}

void change(int sec)
{
    int hour=sec/3600;
    int min=(sec%3600)/60;
    sec=sec-3600*hour-60*min;
    printf("hour :%d, min :%d, sec :%d\n",hour,min,sec);
}