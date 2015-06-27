//
//  main.c
//  demo39
//
//  Created by weichen on 15/6/23.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

char* mycmp(char *dst, const char *src) {
    /*
     数组方式
    
    int index = 0;
    while(src[index] != '\0') {
        dst[index] = src[index];
        index++;
    }
    //src所有的字符串复制完后，dst还差一个结尾的0，需要加上去
    dst[index] = '\0';
    return dst;
     */
    
    
    //指针方式
    char* ret = dst;
    while (*src != '\0') {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = '\0';
    return ret;
}

int main(int argc, const char * argv[]) {
    /**
     * strcpy
     * char * strcpy(char *restrict dst, const char *restrict src);
     * 把src的字符串拷贝到dst，restrict表明src和dst不重叠（C99）
     * 返回dst，为了能链起代码来
     */
    
    /*
     复制一个字符串的套路
     char *dst = (char*)malloc(strlen(src) + 1); //不知道要复制的字符串占多大空间，所以需要动态分配内存，strlen只能求出字符串的大小，不包含结尾的0
     strcpy(dst, src);
    */
    char s1[] = "abc";
    char *str = (char*)malloc(strlen(s1) + 1);
    strcpy(str,s1);
    printf("%s", str);
    return 0;
}
