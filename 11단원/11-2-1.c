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
            printf("�Է��� ���ڿ��� ���̴� %d",i);
            break;
        }
    }
    //printf("�Է��� ���ڿ��� ���̴� %d",i);
    return 0;
}