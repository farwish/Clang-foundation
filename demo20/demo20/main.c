//
//  main.c
//  demo20
//
//  Created by weichen on 15/2/1.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //运算符sizeof，给出某个类型或变量在内存中的字节数
    
    int a = 0;
    
    int b = (int)&a;    //将a的地址强制类型转换为整型
    
    printf("sizeof(a)=%ld\n", sizeof(a)); //4
    
    printf("sizeof(int)=%ld\n", sizeof(int)); //4
    
    printf("sizeof(int)=%ld\n", sizeof(double)); //8, double变量在内存中占据的空间是int变量的两倍
    
    printf("0x%x\n", &a); //0x5fbff82c, %x代表输出十六进制
    
    printf("%p\n", &a); //0x7fff5fbff82c（64位架构下），32位架构下为0x5fbff82c
    
    printf("%p\n", b);  //0x5fbff82c
    
    printf("%lu\n", sizeof(&a));  //8（64位架构），32为架构下int和地址都是4个字节
    
    
    //scanf("%d", &a);里面的&为运算符
    //1. &用于获取变量的地址，其操作数必须是变量
        //int a; printf("%x", &i);
    
    //2. 地址的大小是否与int相同取决于编译器，取决于是32位还是64位架构，并不总是相同
        //int i; printf("%p", &i);
    
    
    //3. &不能对没有的东西取地址，如：&(a++)，&(++a);取地址符右边必须有一个变量。
    
    
    //4. 相邻地址的差距永远是4
    int c[10];
    
    printf("%p\n", &c);     //0x7fff5fbff810
    printf("%p\n", &c[0]);  //0x7fff5fbff810
    printf("%p\n", &c[1]);  //0x7fff5fbff814
    
    printf("%p\n", c);      //0x7fff5fbff810
    printf("%p\n", c[0]);   //0x0
    printf("%p\n", c[1]);   //0x0
    
    return 0;
}

/*
 %d，读入一个十进制数
 %c，读入一个字符
 %a，读入一个浮点值
 %i，读入十进制，八进制，十六进制
 %o，读入八进制整数
 %x，%X，读入十六进制
 %s，读入一个字符串，遇空格、制表符或换行符结束
 %f，用来输入实数，可以用小数形式或指数形式输入
 %lf，按双精度输入或输出
 %p，读入一个指针
 %u，读入一个无符号十进制整数
 %lu，无符号长整型
 %n，至此已读入值得等价字符数
 %[]，扫描字符集合
 %%，读%符号
 
 */
