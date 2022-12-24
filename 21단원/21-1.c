#include<stdio.h>

int main(void)
{
    int inp;
    inp=getchar();
    if('a'<=inp && inp<='z')
    {
        inp=inp-'a'+'A';
        putchar(inp);
    }
    else if('A'<=inp && inp<='Z')
    {
        inp=inp-'A'+'a';
        putchar(inp);
    }
    else{
        printf("error");
    }
}