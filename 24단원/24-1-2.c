#include<stdio.h>

int main(void)
{
    char* str;
    FILE* fp=fopen("mystory.txt","at");
    printf("��ܸԴ� ���� :");
    fputs("# ��ܸԴ� ���� :",fp);
    fgets(str,20,stdin);
    fputs(str,fp);
    printf("��� :");
    fputs("# ��� :",fp);
    fgets(str,20,stdin);
    fputs(str,fp);
    fclose(fp);
}