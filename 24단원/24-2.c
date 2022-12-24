#include<stdio.h>
#include<string.h>

int calByte(FILE**,long pos);

int main(void)
{
    char file[20];
    long pos;
    printf("파일의 이름을 입력하시오. :");
    fgets(file,20,stdin);
    file[strlen(file)-1]=0;
    FILE* fp=fopen(file,"rb");
    pos=ftell(fp);
    printf("%s 파일의 사이즈는 : %d",file,calByte(&fp,pos));
    fclose(fp);
}

int calByte(FILE** ptr,long pos)
{
    fseek(*ptr,0,SEEK_END);
    long size=ftell(*ptr);
    fseek(*ptr,pos,SEEK_SET);
    return size;
}