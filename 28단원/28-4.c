#include<stdio.h>

int main(void)
{
    FILE* fp=fopen("words.txt","rt");
    char ptr[30];
    int a=0,p=0;
    for(;fscanf(fp,"%s",ptr)!=EOF;){
        if(ptr[0]=='a'){
            a++;
        }
        else if(ptr[0]=='p'){
            p++;
        }
    }
    printf("a�� �����ϴ� �ܾ��� ���� : %d\n",a);
    printf("p�� �����ϴ� �ܾ��� ���� : %d\n",p);
}