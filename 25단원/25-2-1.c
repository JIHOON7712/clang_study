#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    int len;
    printf("�Է��� ���ڿ��� �ִ� ���̸� �Է��Ͻÿ�. :");
    scanf("%d",&len);
    char* inp[2];
    for(int q=0;q<2;q++){
        inp[q]=malloc(len);
    }
    getchar();
    printf("���ڿ��� �Է��Ͻÿ�. :");
    fgets(inp[0],len,stdin);
    inp[0][strlen(inp[0])-1]=0;
    inp[1][strlen(inp[0])-1]=0;
    int j=0;
    for(int i=0;i<=strlen(inp[0]);i++){                            
        if(inp[0][i] == 0){
            for(int k=0;k<j;k++){                       //������ ���� ����ŭ ���ڸ� ���ο� �迭�� �����ϴ� �κ�
                inp[1][k]=inp[0][i-j+k];
            }
        }
        else if(inp[0][i] != ' '){            //���Ⱑ ������ ������ ����ؼ� ����ϴ� �ܾ��� ���� ��.
            j++;
            continue;
        }
        else if(inp[0][i] ==' '){
            inp[1][strlen(inp[0])-i-1]=' ';           // ���ο� �迭�� �ܾ �ֱ� ���� ���� �����ϴ� �κ�
            for(int k=0;k<j;k++){                       //������ ���� ����ŭ ���ڸ� ���ο� �迭�� �����ϴ� �κ�
                inp[1][strlen(inp[0])-i+k]=inp[0][i-j+k];
            }
            j=0;
            continue;
        } 
    }
    printf("%s\n%s",inp[0],inp[1]);
}