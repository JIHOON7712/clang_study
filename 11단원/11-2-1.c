#include<stdio.h>

int main(void)
{
    char arr[15];
    int i;
    scanf("%s",arr);
    for(i=0;i<=15;i++)
    {
        if(arr[i]=='\0')
        {
            //i=i+1;
            printf("입력한 문자열의 길이는 %d",i);
            break;
        }
    }
    //printf("입력한 문자열의 길이는 %d",i);
    return 0;
}