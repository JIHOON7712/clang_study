#include<stdio.h>

int main(void)
{
    char arr[50];
    int i,lens,max;
    printf("영단어를 입력하시오: ");
    scanf("%s",arr);
    //문자열의 길이구하기
    for(i=0;i<=50;i++)
    {
        if(arr[i]=='\0')
        {
            lens=i;
            break;
        }
    }

    //아스키코드 비교하기
    for(i=1;i<=lens-1;i++)
    {
        if(arr[i-1]<=arr[i])
            max=i;
        else
            max=i-1;
        printf("%d\n",max);
    }
    printf("%c",arr[max]);
}