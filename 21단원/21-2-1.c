#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[30];
    int total=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        if('1'<=str[i] && str[i]<='9'){
            total+=(str[i]-'1'+1);
        }
        else
        {
            continue;
        }
    }
    printf("%d",total);
}