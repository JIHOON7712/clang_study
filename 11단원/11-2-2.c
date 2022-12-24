#include<stdio.h>

int main(void)
{
    char arr[50];
    int i,lens;
    printf("영단어를 입력하시오: \n");
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

    //문자열 역순으로 출력하기
    for(i=0;i<=lens;i++)
    {
        if(arr[i]=='\0')
        {
            break;
        }
        else
        {
            printf("%c",arr[lens-1-i]);
        }
    }
    return 0;
}