#include<stdio.h>

int main(void)
{
    char arr[50];
    int i,lens;
    printf("���ܾ �Է��Ͻÿ�: \n");
    scanf("%s",arr);
    //���ڿ��� ���̱��ϱ�
    for(i=0;i<=50;i++)
    {
        if(arr[i]=='\0')
        {
            lens=i;
            break;
        }
    }

    //���ڿ� �������� ����ϱ�
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