//
//  main.c
//  demo36
//
//  Created by weichen on 15/6/11.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
     单字符输入输出: putchar，getchar
     
     int putchar(int c);
     向标准输出写一个字符
     返回写了几个字符，EOF (-1)表示写失败（end of file）
     
     int getchar(void);
     从标准输入读入一个字符
     返回类型是int是为了返回EOF (-1)：Windows->Ctrl-Z
                                   Unix->Ctrl-D
     */
    
    int ch;
    
    while( (ch = getchar()) != EOF ) {
        putchar(ch);
    }
    
    return 0;
    
    /*
     字符串数组：
     char **a;
        a是一个指针，指向另一个指针，那个指针指向一个字符（串）
     char a[][1];
     
     */
}
