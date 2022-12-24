#include<stdio.h>
#include<stdlib.h>

typedef struct book{
        char aut[10];
        char title[10];
        int pages;
    }Book;


int main(void)
{
    int i=0;
    char ans;
    Book* ptr=(Book*)malloc(sizeof(Book));
    while(1){
        printf("작가을 입력하시오. :");
        fgets((ptr+i)->aut,sizeof((ptr+i)->aut),stdin);
        printf("제목을 입력하시오. :");
        fgets((ptr+i)->title,sizeof((ptr+i)->title),stdin);
        printf("페이지 수를 입력하시오. :");
        scanf("%d",&((ptr+i)->pages));
        getchar();
        printf("계속 하시겠습니까?(Y or N) : ");
        ans=getchar();
        getchar();
        if(ans=='N'){
            break;
        }
        i++;
        ptr=(Book*)realloc(ptr,(i+1)*sizeof(Book));
    }

    for(int j=0;j<=i;j++){
        printf("저자 :");
        printf("%s",(ptr+j)->aut);
        printf("제목 :");
        printf("%s",(ptr+j)->title);
        printf("페이지 수 :");
        printf("%d\n",(ptr+j)->pages);
    }


}