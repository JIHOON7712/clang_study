#include<stdio.h>
#include<string.h>

int calByte(FILE**,long pos);

int main(void)
{
    char file[20];
    long pos;
    printf("������ �̸��� �Է��Ͻÿ�. :");
    fgets(file,20,stdin);
    file[strlen(file)-1]=0;
    FILE* fp=fopen(file,"rb");
    pos=ftell(fp);
    printf("%s ������ ������� : %d",file,calByte(&fp,pos));
    fclose(fp);
}

int calByte(FILE** ptr,long pos)
{
    fseek(*ptr,0,SEEK_END);
    long size=ftell(*ptr);
    fseek(*ptr,pos,SEEK_SET);
    return size;
}