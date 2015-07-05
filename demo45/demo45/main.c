//
//  main.c
//  demo45
//
//  Created by weichen on 15/6/28.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

// 声明一种新的结构类型，非实体；.运算符左边的结构变量才是实体
struct date {
    int month;
    int day;
    int year;
};

int main(int argc, const char * argv[]) {
    /*
     
     结构类型：复合数据类型, 成员变量可以是不同类型，声明结构类型是一条语句，结尾需要分号。
        1.和本地变量一样，在函数内部声明的结构类型只能在函数内部使用。
        2.所以通常在函数外部声明结构类型，这样就可以被多个函数所使用了。
        3.结构类型和结构变量是两件事情，通过一种结构类型可以定义出很多结构变量，每个结构变量按照结构声明的样子具有相同的成员变量。
     
     声明结构的形式：
        1.
        struct point {
            int x;
            int y;
        };
     
        struct point p1,p2;
        // p1和p2都是point里面有x和y的值（变量）。
     
        2.
        struct {
            int x;
            int y;
        } p1, p2;
        // p1和p2都是一种无名结构，里面有x和y；p1和p2并不是类型的名字，这里只是想要两个变量p1和p2，而且以后不想继续使用这个结构，所以没有起名字；做法不常见。
    
        3.
        struct point {
            int x;
            int y;
        } p1, p2;
        // 声明一个point结构，并定义两个变量p1和p2，常见。
     
     结构的初始化：
        struct date today = {07, 31, 2014}; //以数组的方式顺序赋值
        struct date thismonth = {.month=7, .year=2014}; //数组内以.成员变量的方式赋值，没有赋值的为0
     
     
     结构成员：
        结构和数组有点像
        数组的成员类型必须一样，结构的成员类型可以不一样
        数组用[]运算符和下标访问其成员，a[0] = 10;
        结构用.运算符和名字访问其成员，today.day; student.firstName; p1.x; p1.y;
     
     结构运算：
        要访问整个结构，直接用结构变量的名字
        对于整个结构，可以做赋值、取地址，也可以传递给函数参数
            p1 = (struct point){5, 10}; //将5，10强制转换为point结构的变量, 赋给p1，相当于p1.x = 5; p1.y = 10;
            p1 = p2;    //相当于p1.x = p2.x; p1.y = p2.y; 数组变量在初始化后无法做这种赋值的运算

     结构指针：
        和数组不同，结构变量的名字并不是结构变量的地址，必须使用&运算符
        struct date *pDate = &today;
     
     */
    
    /*
     定义一个结构的变量today（类型是struct date，下面就可以使用today）
     struct date today;

     today.month = 06;
     today.day = 28;
     today.year = 2015;
    */
    
    struct date today = {06, 28, 2015};
    struct date thismonth = {.month=6, .year=2015};
    
    struct date t;  //未赋值的结构变量
    t = (struct date){06, 28, 2015}; //赋值
    struct date m;
    m = t;          //m和t是两个不同的变量，赋值之后，m就得到了t所有成员的值
    //m.year = 2016; 给m单独赋值，不会改变t的值
    
    struct date *pDate = &today;
    
    printf("Today's date is %i-%i-%i\n", today.year, today.month, today.day); //Today's date is 2015-6-28
    
    printf("This month is %i-%i-%i\n", thismonth.year, thismonth.month, thismonth.day); //This month is 2015-6-0
    
    printf("t is %i-%i-%i\n", t.year, t.month, t.day);  //t is 2015-6-28
    
    printf("m is %i-%i-%i\n", m.year, m.month, m.day);  //m is 2015-6-28
    
    printf("%p", &pDate);   //0x7fff5fbff7d8
    
    return 0;
}
