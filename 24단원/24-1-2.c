#include<stdio.h>

int main(void)
{
    char* str;
    FILE* fp=fopen("mystory.txt","at");
    printf("Áñ°Ü¸Ô´Â À½½Ä :");
    fputs("# Áñ°Ü¸Ô´Â À½½Ä :",fp);
    fgets(str,20,stdin);
    fputs(str,fp);
    printf("Ãë¹Ì :");
    fputs("# Ãë¹Ì :",fp);
    fgets(str,20,stdin);
    fputs(str,fp);
    fclose(fp);
}