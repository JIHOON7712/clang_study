#include<stdio.h>

int main(void)
{
    char str[30];
    FILE* fp=fopen("mystory.txt","rt");
    while((fgets(str,30,fp))!=NULL){
        fputs(str,stdout);
    }
    if(feof(fp)!=0){
        fputs(str,stdout);
    }
    else
    {
        fputs("¿À·ù",stdout);
    }
    fclose(fp);
    
}