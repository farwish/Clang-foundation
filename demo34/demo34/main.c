//
//  main.c
//  demo34
//
//  Created by weichen on 15/6/10.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // 输入数据：输入数据时，先告诉你个数，然后再输入，要记录每个数据
    // C99可以用变量做数组定义的大小，C99之前呢？
    // int *a = (int*)malloc(n*sizeof(int));
    
    /*
     动态内存分配
     #include <stdlib.h>
     void* malloc(size_t size);
     1. 向malloc申请的空间的大小是以字节为单位的
     2. 返回的结果是void*，需要类型转换为自己需要的类型
     3. (int*)malloc(n*sizeof(int));
     */
    
    int number;
    int* a;
    int i;
    
    printf("输入数量:");
    scanf("%d", &number);
    // int a[number];   // C99写法
    a = (int*)malloc(number*sizeof(int));   //malloc返回的void*，所以需要类型转换一下，现在a就可以当做数组使用
    
    for (i=0; i<number; i++) {
        scanf("%d", &a[i]);
    }
    for (i=number; i>=0; i--) {
        printf("%d", a[i]);
    }
    
    free(a);    // 归还内存
    
    return 0;
}
