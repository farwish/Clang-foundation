//
//  main.c
//  demo21
//
//  Created by weichen on 15/2/4.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(void) {
    /*
     指针：保存地址的变量，也就是指针变量的值是其它变量的地址。
     1. 变量的值是内存的地址
     2. 普通变量的值是实际的值
     3. 指针变量的值是具有实际值的变量的地址
     */
    
    //int i;
    //int *p = &i;   //将i的地址给“指针p”
    
    //int* p,q;      //*p为int，q为int
    //int *p,q;      //同上
    //int *p,*q;     //*p为int，*q为int
    
    
    //指针作为函数参数
    //void custom(int *p);
    
    //调用函数时传入地址, 函数内可通过指针访问变量a, 也可以修改a
    //int a = 0;
    //custom(&a);
    
    /*
    int i = 6;
    printf("&i=%p\n", &i);  //&i=0x7fff5fbff838
    f(&i);                  //p=0x7fff5fbff838
    k(i);                   //p=6
    g(&i);                  //p=6
    m(&i);                  //p=10
     */
    
    
    
    //如果不将i的地址传入scanf，那么计算机将理解为i的值就是地址，最终运行将报错
    //scanf("%d", i);
    
    return 0;
}

int f(int *p) {
    printf("p=%p\n", p);
    return 0;
}

int k(int p) {
    printf("p=%d\n", p);
    return 0;
}

int g(int *p) {
    printf("p=%d\n", *p);
    *p = 10;    //更改了i的值
    return 0;
}

int m(int *p) {
    printf("p=%d\n", *p);
    return 0;
}