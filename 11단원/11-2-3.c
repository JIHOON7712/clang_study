#include<stdio.h>

int main(void)
{
    char arr[50];
    int i,lens,max;
    printf("���ܾ �Է��Ͻÿ�: ");
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

    //�ƽ�Ű�ڵ� ���ϱ�
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