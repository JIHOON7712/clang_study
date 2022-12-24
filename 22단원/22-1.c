#include<stdio.h>
#include<string.h>

int main(void)
{
    struct employee{
        char name[20];
        char code[20];
        int wage; 
    }p1;
    fgets(p1.name,sizeof(p1.name),stdin);
    p1.name[strlen(p1.name)-1]=0;
    fgets(p1.code,sizeof(p1.code),stdin);
    p1.code[strlen(p1.code)-1]=0;
    scanf("%d",&p1.wage);
    printf("%s%s\n%d",p1.name,p1.code,p1.wage);
}