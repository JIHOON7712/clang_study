#include<stdio.h>

int main(void)
{
    char* str;
    FILE* fp=fopen("mystory.txt","wt");
    printf("이름 :");
    fputs("# 이름 :",fp);
    fgets(str,20,stdin);
    fputs(str,fp);
    printf("주민번호 :");
    fputs("# 주민번호 :",fp);
    fgets(str,20,stdin);
    fputs(str,fp);
    printf("전화번호 :");
    fputs("# 전화번호 :",fp);
    fgets(str,20,stdin);
    fputs(str,fp);
    fclose(fp);
}