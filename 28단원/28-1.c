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
        printf("�۰��� �Է��Ͻÿ�. :");
        fgets((ptr+i)->aut,sizeof((ptr+i)->aut),stdin);
        printf("������ �Է��Ͻÿ�. :");
        fgets((ptr+i)->title,sizeof((ptr+i)->title),stdin);
        printf("������ ���� �Է��Ͻÿ�. :");
        scanf("%d",&((ptr+i)->pages));
        getchar();
        printf("��� �Ͻðڽ��ϱ�?(Y or N) : ");
        ans=getchar();
        getchar();
        if(ans=='N'){
            break;
        }
        i++;
        ptr=(Book*)realloc(ptr,(i+1)*sizeof(Book));
    }

    for(int j=0;j<=i;j++){
        printf("���� :");
        printf("%s",(ptr+j)->aut);
        printf("���� :");
        printf("%s",(ptr+j)->title);
        printf("������ �� :");
        printf("%d\n",(ptr+j)->pages);
    }


}