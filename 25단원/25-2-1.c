#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    int len;
    printf("입력할 문자열의 최대 길이를 입력하시오. :");
    scanf("%d",&len);
    char* inp[2];
    for(int q=0;q<2;q++){
        inp[q]=malloc(len);
    }
    getchar();
    printf("문자열을 입력하시오. :");
    fgets(inp[0],len,stdin);
    inp[0][strlen(inp[0])-1]=0;
    inp[1][strlen(inp[0])-1]=0;
    int j=0;
    for(int i=0;i<=strlen(inp[0]);i++){                            
        if(inp[0][i] == 0){
            for(int k=0;k<j;k++){                       //세었던 문자 수만큼 문자를 새로운 배열에 대입하는 부분
                inp[1][k]=inp[0][i-j+k];
            }
        }
        else if(inp[0][i] != ' '){            //띄어쓰기가 나오기 전까지 계속해서 써야하는 단어의 수를 셈.
            j++;
            continue;
        }
        else if(inp[0][i] ==' '){
            inp[1][strlen(inp[0])-i-1]=' ';           // 새로운 배열에 단어를 넣기 전에 띄어쓰기 대입하는 부분
            for(int k=0;k<j;k++){                       //세었던 문자 수만큼 문자를 새로운 배열에 대입하는 부분
                inp[1][strlen(inp[0])-i+k]=inp[0][i-j+k];
            }
            j=0;
            continue;
        } 
    }
    printf("%s\n%s",inp[0],inp[1]);
}