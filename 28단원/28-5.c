#include<stdio.h>
#include<string.h>

int discri(char* f1,char* f2){  //������ �̸��� �Ű������� �޾Ƽ� ������ 1 �ٸ��� -1�� ��ȯ�ϴ� �Լ�
    FILE* fp1=fopen(f1,"rt");
    FILE* fp2=fopen(f2,"rt"); 
    char a[2][30];
    for(;fgets(a[0],30,fp1)!=NULL && fgets(a[1],30,fp2)!=NULL;){
        if(strcmp(a[0],a[1])!=0){
            return -1;
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 1;
}

int main(void){
    char str[2][30];
    printf("ù ��° ���� �̸��� �Է��Ͻÿ�. :");
    fgets(str[0],30,stdin);
    str[0][strlen(str[0])-1]=0;
    printf("�� ��° ���� �̸��� �Է��Ͻÿ�. :");
    fgets(str[1],30,stdin);
    str[1][strlen(str[1])-1]=0;
    if(discri(str[0],str[1])==-1){
        printf("������ ��ġ���� �ʽ��ϴ�. \n");
    }
    else if(discri(str[0],str[1])==1){
        printf("������ ��ġ�մϴ�. \n");
    }
    return 0;
}

//fgets �Լ��� �������� �� �ι��ڸ� �־�����+fgets�Լ��� ���������� NULL���ڸ� ��ȯ�Ѵ�.