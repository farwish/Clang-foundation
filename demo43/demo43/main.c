//
//  main.c
//  demo43
//
//  Created by weichen on 15/6/27.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

enum color {red, yellow, green};    //声明数据类型color

void f(enum color c);               //f函数需要传入叫color的枚举类型

int main(int argc, const char * argv[]) {
    /*
     枚举是一种用户定义的数据类型，用关键字enum以如下语法来声明：
        enum 枚举类型名字 {名字0, ..., 名字n};
     
     枚举类型名字通常并不是真的使用，要用的实在大括号里的名字，因为它们就是常量符号，它们的类型是int，值依次从0到n。如：
        enum colors {red, yellow, green};
     这样就创建了三个常量，red的值是0，yellow是1，green是2。
     
     当需要一些可以排列起来的常量值时，定义枚举的意义就是给了这些常量值名字。
     */
    
    /*
     枚举量可以作为值
     
     枚举类型可以跟上enum作为类型
     
     但是实际上是以整数来做内部计算和外部输入输出的
     */
    
    enum color t = red; //t是color的枚举类型
    
    scanf("%d", &t);
    f(t);

    return 0;
}

void f(enum color c) {
    printf("%d\n", c);
}
