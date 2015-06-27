//
//  main.c
//  demo40
//
//  Created by weichen on 15/6/26.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    /*
     在字符串中找单个字符
     char* strchr(const char *s, int c);
     char* strrchr(const char *s, int c);
     返回NULL表示没有找到
     */
    
    char s[] = "hello";
    char *p = strchr(s, 'l');
    printf("%s\n", p);  //llo
    
    //找第二个l
    char *q = strchr(p + 1, 'l');
    printf("%s\n", q);  //lo
    
    //从右边开始找
    char *a = strrchr(s, 'l');
    printf("%s\n", a);  //lo
    
    //复制找到的字符串
    char *r = (char*)malloc(strlen(p) + 1); //1.动态分配内存空间
    char *t = strcpy(r, p);                 //2.复制字符串
    printf("%s\n", t);  //llo
    free(r);                                //3.释放动态分配的内存空间
    
    //找l之前字符的技巧
    char c = *p;
    *p = '\0';          //将*p所指的位置替换为\0; s就变成了he\0lo
    char *u = (char*)malloc(strlen(s) + 1);
    char *v = strcpy(u, s);
    printf("%s\n", v);  //he
    printf("%s\n", s);  //he
    free(u);
    
    //最后将*p恢复为l
    *p = c;
    printf("%s\n", s);  //hello
    
    
    /*
     字符串中找字符串
     char* strstr(const char *s1, const char *s2);
     字符串中找字符串，并忽略大小写
     char* strcasestr(const char *s1, const char *s2);
     */
    char x[] = "E";
    char y[] = "e";
    char *z1 = strstr(s, x);    //如果第二个参数x改为字符'E'，就会报错，因为函数接受的参数是一个指针；
    char *z2 = strstr(s, y);
    char *z3 = strcasestr(s, x);
    printf("%s\n", z1); //null
    printf("%s\n", z2); //ello
    printf("%s\n", z3); //ello
    
    /*
     连接两个字符串
     extern char* strcat(char *dest, char *src);
     */
    char ab[10] = "good";
    char *cd = "bye";
    strcat(ab, cd);
    printf("%s\n", ab); //goodbye
    
    return 0;
}

//注：PHP中strchr是strstr的别名，因为里面没有指针一说，所以第一第二个参数均为字符串。
