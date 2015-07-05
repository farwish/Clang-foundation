//
//  main.c
//  demo49
//
//  Created by weichen on 15/7/6.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

typedef union {
    int i;
    char ch[sizeof(int)];
} CHI;

int main(int argc, const char * argv[]) {
    /*
     - 联合 -
     
     和struct非常相似
     
     union AnElt {
        int i;
        char c;
     } elt1, elt2;  // 成员是一个int i 还是一个char c， sizeof(union ...) = sizeof(每个成员)的最大值
     
     elt1.i = 4;
     elt2.c = 'a';
     elt2.i = 0xDEADBEEF;
     
     和struct不一样的是：
        存储
            所有的成员共享一个空间
            同一时间只有一个成员是有效的
            union的大小是其最大的成员
        初始化
            对第一个成员做初始化
            可以得到整数/float/double内部的各个字节
     */
    
    CHI chi;
    int i;
    chi.i = 1234;
    for (i=0; i<sizeof(int); i++) {
        printf("%02hhX", chi.ch[i]);    //D2040000
    }
    printf("\n");
    
    return 0;
}
