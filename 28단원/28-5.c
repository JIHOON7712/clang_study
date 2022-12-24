#include<stdio.h>
#include<string.h>

int discri(char* f1,char* f2){  //파일의 이름을 매개변수로 받아서 같으면 1 다르면 -1을 반환하는 함수
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
    printf("첫 번째 파일 이름을 입력하시오. :");
    fgets(str[0],30,stdin);
    str[0][strlen(str[0])-1]=0;
    printf("두 번째 파일 이름을 입력하시오. :");
    fgets(str[1],30,stdin);
    str[1][strlen(str[1])-1]=0;
    if(discri(str[0],str[1])==-1){
        printf("파일이 일치하지 않습니다. \n");
    }
    else if(discri(str[0],str[1])==1){
        printf("파일이 일치합니다. \n");
    }
    return 0;
}

//fgets 함수는 마지막에 꼭 널문자를 넣어주자+fgets함수는 오류값으로 NULL문자를 반환한다.