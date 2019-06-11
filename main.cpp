//
//  main.cpp
//  高级
//
//  Created by 王潞东 on 2018/12/22.
//  Copyright © 2018 王潞东. All rights reserved.
//
#include"stdio.h"
#include "stdlib.h"
int main()
{
    printf("fe\n");
    FILE *fp;

    if ((fp=fopen("/Users/wangludong/Documents/高级/高级/File","r+"))==NULL)
    {
        printf("cannot open this file\n");
        exit(0);
        
    }  printf("fe\n");
    FILE *fp1;
    
    if ((fp1=fopen("/Users/wangludong/Documents/高级/高级/File1","r+"))==NULL)
    {
        printf("cannot open this file\n");
        exit(0);
        
    }
    FILE *fp2;
    
    if ((fp2=fopen("/Users/wangludong/Documents/高级/高级/File2","r+"))==NULL)
    {
        printf("cannot open this file\n");
        exit(0);
        
    }
    printf("快来输入字符呀：\n");
  //while((ch=fgetc(fp))!='#'){fputc(ch, fp1);putchar(ch);}putchar(10);
    char s[100];int i=0;
    while (i<10)
    {
        fgets(s, 100, fp1);
        printf("%s",s);
        fputs(s, fp2);
        i++;}
    
    fseek(fp, -11l, 2); fputs("China", fp);
    
    
    
    fclose(fp);fclose(fp1);fclose(fp1);
    putchar(10);

    return 0;
}
