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
    printf("a로 시작하는 단어의 수는 : %d\n",a);
    printf("p로 시작하는 단어의 수는 : %d\n",p);
}