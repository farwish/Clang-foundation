//
//  main.c
//  demo48
//
//  Created by weichen on 15/7/6.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
     - 自定义数据类型（typedef） -
     
     C语言提供了一个叫做typedef的功能来声明一个已有的数据类型的新名字，如：
        typedef int Length;         // Length成为int类型的别名, 等价于int类型
        typedef *char[10] Strings;  // Strings是10个字符串的数组的类型，10个字符指针的数组
        typedef struct node {
            int data;
            struct node *next;
        } aNode;
        
        或 typedef struct node aNode; // 这样用aNode就可以代替struct node
     
     这样，Length这个名字就可以代替int出现在变量定义和参数声明的地方了：
        Length a,b,len;
        Length numbers[10];
     
     Typedef
        声明新的类型的名字
            新的名字是某种类型的别名
            改善了程序的可读性
     
            typedef long int64_t;   // 重载已有的类型名字，新名字的含义更清晰，具有可移植性
            typedef struct ADate {  // 在typedef和最后单词中间的所有东西是它原来的类型
                int month;
                int day;
                int year;
            } Date;                 // 简化了复杂的名字
     
            int64_t i = 1000000000;
            Date d = {9, 1, 2005};
     
     
            // 把一个struct命名为Date (struct名字我们不关心,因为有更好的方式来表达它了 - Date)
            typedef struct {
                int month;
                int day;
                int year;
            } Date;
     */
    
    typedef struct {
        int month;
        int day;
        int year;
    } Date;
    
    Date a = {1,2,3};
    printf("%ld,%ld,%ld", a.month, a.day, a.year);  //1,2,3
    
    return 0;
}
