#include<stdio.h>
#include<string.h>

int main(void)
{
    char inp[10];
    printf("Input the word :");
    scanf("%s",&inp);
    int len=strlen(inp);
    printf("%d\n",len);
    for(int i=0;i<(len/2);i++)
    {
        if(*(inp+i)==*(inp+len-1)){
            len--;
            continue;
        }
        else{
            printf("Not Palindrome");
            break;
        }
    }
    printf("Palindrome");
}