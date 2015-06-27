//
//  main.c
//  demo37
//
//  Created by weichen on 15/6/23.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//自定义求长度的函数
int mylen(const char *s) {
    int index = 0;
    //知道长度用for循环
    while (s[index] != '\0') {
        index++;
    }
    return index;
}

int main(int argc, const char * argv[]) {
    
    char line[] = "hello";
    
    printf("strlen=%d\n", strlen(line));    //strlen=5
    
    printf("strlen=%d\n", mylen(line));

    printf("sizeof=%d", sizeof(line));      //sizeof=6
    
    return 0;
}
