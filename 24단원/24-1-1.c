#include<stdio.h>

int main(void)
{
    char* str;
    FILE* fp=fopen("mystory.txt","wt");
    printf("�̸� :");
    fputs("# �̸� :",fp);
    fgets(str,20,stdin);
    fputs(str,fp);
    printf("�ֹι�ȣ :");
    fputs("# �ֹι�ȣ :",fp);
    fgets(str,20,stdin);
    fputs(str,fp);
    printf("��ȭ��ȣ :");
    fputs("# ��ȭ��ȣ :",fp);
    fgets(str,20,stdin);
    fputs(str,fp);
    fclose(fp);
}