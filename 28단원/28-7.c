#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char name[20];
    char num[30];
}Info;

int i=0;    //�Էµ� ������ ����
Info* ptr;  //������ �ּҰ�

void insert(){      //�̸��� ��ȣ�� �Է��ϰ� ������ +1�Ѵ�.
    ptr=realloc(ptr,(i+1)*sizeof(Info));        //malloc�� ������� �ʾƵ� realloc�� �� �ִ�.
    printf("[INSERT]\nInsert user's name :");
    fgets((ptr+i)->name,20,stdin);
    (ptr+i)->name[strlen((ptr+i)->name)-1]=0;
    printf("Insert user's phone number :");
    fgets((ptr+i)->num,30,stdin);
    (ptr+i)->num[strlen((ptr+i)->num)-1]=0;
    i++;
    printf("Inserted\n");
}

void delete(){      //�̸��� �˻��Ͽ� ������ �� ������ -1�Ѵ�.
    char found[20];
    printf("[DELETE]\nInsert user's name :");
    fgets(found,20,stdin);
    found[strlen(found)-1]=0;
    for(int j=0;j<i;j++){
        if(strcmp((ptr+j)->name,found)==0){
            free(ptr+j);
            i--;
            printf("Deleted\n");
        }
    }
}

void search(){      //�̸��� �Է¹޾Ƽ� �˻��� �� ����Ѵ�.
    char found[20];
    printf("[SEARCH]\nInsert user's name :");
    fgets(found,20,stdin);
    found[strlen(found)-1]=0;
    for(int j=0;j<i;j++){
        if(strcmp((ptr+j)->name,found)==0){
            printf("Name :%s\nNumber :%s\n",(ptr+j)->name,(ptr+j)->num);
            printf("Searched\n");
        }
    }
}

void printall(){        //���� ����Ǿ��ִ� ��� ������ ����Ѵ�.
    printf("[PRINT]\n");
    for(int j=0;j<i;j++){
        printf("Name :%s\nNumber :%s\n",(ptr+j)->name,(ptr+j)->num);
    }
    printf("Printed\n");
}

int main(void){
    int j;
    int h=1;
    while(h){
        printf("******MENU******\n");
        printf("1. Insert\n2. Delete\n3. Search\n4. Print\n5. Exit\nChoose the number :");
        scanf("%d",&j);
        getchar();
        switch(j){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                search();
                break;
            case 4:
                printall();
                break;
            default:
                h=0;
                break;       
        }
    }
    FILE* res=fopen("numberbook.txt","wt");
    for(int j=0;j<i;j++){
        fputs("Name :",res);
        fputs((ptr+j)->name,res);
        fputs("\n",res);
        fputs("Number :",res);
        fputs((ptr+j)->num,res);
        fputs("\n",res);
    }
    fclose(res);
    printf("END\n");
}


