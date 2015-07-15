//
//  main.c
//  demo54
//
//  Created by weichen on 15/7/14.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int gAll;

// int g2 = gAll; 编译不通过；如果是 const int gAll = 10；int g2 = gAll；是可以的，但是不推荐这么写

void f(int a);

void t(void);


int main(int argc, const char * argv[]) {
    /*
     1. 全局变量
    
     定义在函数外面的变量是全局变量
     全局变量具有全局的生存期和作用域
        它们与任何函数无关
        在任何函数内部都可以使用它们
     
     2. 全局变量初始化
     
     没有做初始化的全局变量会得到0值，编译器会加上；本地变量是内存里有什么就得到什么
        指针没有初始化会得到NULL值
     只能用编译时刻已知的值来初始化全局变量
     它们的初始化发生在main函数之前
     
     3. 静态本地变量
     
     在本地变量定义时加上static修饰符就成为静态本地变量
     当函数离开的时候，静态本地变量会继续存在并保持其值
     静态本地变量的初始化只会在第一次进入这个函数时做，以后进入函数时会保持上次离开时的值
     
     静态本地变量实际上是特殊的全局变量
        它们位于相同的内存区域；&gAll和&all相差正好是一个int的大小，而实际的本地变量放在另外的地方
     静态变量具有全局的生存期，函数内的局部作用域
        static在这里的意思是局部作用域（本地可访问）
     
     4. 返回指针的函数
    
     返回本地变量的地址是危险的；因为离开函数，本地变量就不存在了
     返回全局变量或静态本地变量的地址是安全的
     返回在函数内malloc的内存是安全的，但是容易造成问题
     最好的做法是返回传入的指针
     
     5. Tips
     
     不要使用全局变量来在函数间传递参数和结果
     尽量避免使用全局变量
        丰田汽车的案子
     使用全局变量和静态本地变量的函数是线程不安全的
     
     */
    
    printf("in %s is %d\n", __func__, gAll); // in main is 0
    
    f(gAll);
    
    printf("again in %s is %d\n", __func__, gAll); // again in main is 2
    
    t(); // all is 6
    t(); // all is 7 , 没有被重新初始化为5，使用上次得到的变量值
    t(); // all is 8

    return 0;
}

// 全局变量
void f(int a)
{
    printf("in %s is %d\n", __func__, a); // in f is 0

    gAll += 2;
    
    printf("again in %s is %d\n", __func__, gAll); // again in f is 2

    int gAll = 1; // 重新声明一个与全局变量同名的本地变量，此时全局变量gAll被隐藏
    
    printf("last in %s is %d\n", __func__, gAll); // last in f is 1
}

// 静态本地变量
void t(void)
{
    static int all = 5;
    
    int k = 0;
    
    all += 1;
    
    printf("all is %d\n", all);

    printf("&gAll = %p\n", &gAll); // &gAll = 0x10000101c
    printf("&all = %p\n", &all); // &all = 0x100001018
    printf("&k = %p\n", &k); //  &k = 0x7fff5fbff80c
}

/*
int* g(void)
{
    int x = 10;
    return &x; // 返回本地变量的地址，编译要么不通过要么提示warning
}
*/