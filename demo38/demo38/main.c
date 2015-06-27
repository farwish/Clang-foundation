//
//  main.c
//  demo38
//
//  Created by weichen on 15/6/23.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int mycmp(const char *s1, const char *s2) {
    //当做数组处理：用一个整数当做下标，遍历字符串
    /*
    int index = 0;
    while (1) {
        if(s1[index] != s2[index]) {
            break;
        } else if(s1[index] == '\0') {
            break;
        }
        index++;
    }
    return s1[index] - s2[index];
    */
     
    //直接用指针：指针加加，判断指针所指的值
    while (1) {
        if(*s1 != *s2) {
            break;
        } else if(*s1 == '\0') {
            break;
        }
        s1++;
        s2++;
    }
    return *s1 - *s2;

    //好看的写法
    /*
    while （*s1 == *s2 && *s1 != '\0') {
        s1++;
        s2++;
    }
    return *s1 - *s2;
    */
}


int main(int argc, const char * argv[]) {

    /**
     * strcmp
     * int strcmp(const char *s1, const char *s2);
     * 比较两个字符串，返回：
     * 0 ：s1==s2
     * 1 ：s1 >s2
     * -1：s1 <s2
     */
    
    char s1[] = "abc";
    
    char s2[] = "abc ";

    printf("%d\n", strcmp(s1, s2)); //0

    printf("%d\n", mycmp(s1, s2));
    
    //判断两个字符串是否相等的写法
    if(strcmp(s1, s2) == 0) {
        printf("s1 = s2");
    } else {
        printf("s1 != s2");
    }
    
    return 0;
}
