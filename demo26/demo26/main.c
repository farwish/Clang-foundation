//
//  main.c
//  demo26
//
//  Created by weichen on 15/3/10.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    /*
     字符串函数:string.h
     strlen
     strcmp
     strcpy
     strcat
     strchr
     strstr
     */
    
    //size_t strlen(const char *s);
    //作为参数，数组形式和指针形式是一样的，数组也是指针；返回s的字符串长度，不包括结尾的0
    //如果函数不修改参数，应该以常量形式传入
    
    char line[] = "hello";
    printf("strlen=%lu\n", strlen(line));       //strlen=5
    printf("sizeof=%lu\n", sizeof(line));       //sizeof=6
    
    //int strcmp(const char *s1, const char *s2);
    //比较两个字符串，返回：0（s1==s2），1（s1>s2），-1（s1<s2）
    //printf("%d\n", 'a', 'A');
    
    char s1[] = "abc";
    char s2[] = "abc";
    
    printf("%d\n", s1==s2); //直接比较两个数组，相当于地址的比较，所以总是不相等的，输出0
    
    if( strcmp(s1, s2) == 0 ) {
        printf("s1=s2\n");  //s1=s2
    }
    
    char s3[] = "bbc";
    
    printf("%d\n", strcmp(s1, s3)); // -1
    
    char s4[] = "Abc";
    
    printf("%d\n", strcmp(s1, s4)); //32 , 小写字母比大写字母大，返回值为它们之间的差值
    printf("%d\n", 'a' - 'A');  //32
    
    char s5[] = "abc ";
    printf("%d\n", strcmp(s1, s5)); //-32 , 前三个字母相等，比较到第四个的时候，0减32（空格的ASCII码32）= -32
    
    /* 比较过程如下：s1[0] == s2[0]  ?
    ------------------
    | a | b | c | \0 |
    |-----------------
      ||  ||  ||
    -----------------------
    | a | b | c | 空格| \0 |
    |----------------------
    */
    
    //char *strcpy(char *restrict dst, const char *restrict src);
    //把src的字符串拷贝到dst
        //restrict表明src和dst不重叠（C99）
    //返回dst
        //为了能链起代码来
    
    
    //char * strcat(char *restrict s1, const char *restrict);
    //把s2拷贝到s1的后面，接成一个长的字符串
    //返回s1
    //s1必须具有足够的空间
    
    //strcpy和strcat都可能出现安全问题
        //如果目的地没有足够的空间
    
    
    //安全版本：
    //char * strncpy(char *restrict dst, const char *restrict src, size_t n);
    
    //char * strncat(char *restrict s1, const char *restrict s2, size_t n);
    
    //int strncmp(const char *s1, const char *s2, size_t n);
    
    
    //字符串中找字符
    char * strchr(const char *s, int c);
    char * strrchr(const char *s, int c);
    //返回NULL表示没有找到
    
    
    return 0;
}
