//
//  main.c
//  demo30
//
//  Created by weichen on 15/4/8.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //自动类型转换
    //当运算符的两边出现不一致的类型时，会自动转换成较大的类型，能表达范围更大的数
    
    //char -> short -> int -> long -> long long
    //int -> float -> double
    
    //对于printf,任何小于int的类型会被转换成int；float会被转换成double
    //但是sachf不会，要输入short，需要%hd，要输入long long，需要%ld。
    
    
    // 强制类型转换的优先级高于四则运算
    //1. (类型)值
    double a = 1.0;
    double b = 2.0;
    int i = (int)a/b;
    int j = (int)(a/b);
    
    int c = 5;
    int d = 6;
    double e = (double)(c/d);
    
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%lf\n", e);
    
    //2. 小的变量不总能表达大的量
    printf("%d\n", (short)32768);   //-32768,short最多能表示32767
    printf("%d\n", (char)32768);    //0
    
    //3. 强制类型转换只是从那个变量计算出了一个新的类型的值，它并不改变那个变量，无论是值还是类型都不改变
    int k = 32768;
    short kk = (short)k;
    printf("%d\n", k);  //32768
    
    //条件运算符
    //c = (count > 20) ? count - 10 : count + 10;
    //条件运算符的优先级高于赋值运算符，但是低于其他运算符
    
    
    //逗号运算符
    //逗号用来连接两个表达式，并以其右边的表达式的值作为它的结果。逗号的优先级是所有的运算符中最低的，所以它两边的表达式会先计算；逗号的组合关系是自左向右，所以左边的表达式会先计算，而右边的表达式的值就留下来作为逗号运算的结果。
    //在for中使用， for(i=0,j=0;i<j;i++,j--){}，这里逗号划分两个表达式。
    int n;
    int m;
    n = 1+2,3+4;        //n=1+2是一个表达式，3+4没有用到，最终结果是3
    m = (1+2,3+4);      //组合关系，右边表达式的值作为结果
    printf("%d\n", n);  //3
    printf("%d\n", m);  //7
    
    return 0;
}
