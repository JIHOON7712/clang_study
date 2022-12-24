#include<stdio.h>
#include<string.h>

int main(void)
{
    char inp1[20];
    char inp2[20];
    fgets(inp1,sizeof(inp1),stdin);
    fgets(inp2,sizeof(inp2),stdin);
    if(strcmp(inp1,inp2)==0){
        printf("같은 사람입니다~");
    }
    else{
        printf("다른 사람입니다~");
    }
}