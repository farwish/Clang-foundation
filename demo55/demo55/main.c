//
//  main.c
//  demo55
//
//  Created by weichen on 15/7/15.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

// const double PI = 3.14159; // C99可以使用的方式
#define PI 3.14159 // C99之前使用的方式，#define是编译预处理指令

#define FORMAT "%f\n"

#define PI2 2*PI // pi * 2

#define PRT printf("%f ", PI);\
            printf("%f\n", PI2)

#define cube(x) ( (x) * (x) * (x) )

#define RADTODEG1(x) (x * 57.3)
#define RADTODEG2(x) (x) * 57.3

int main(int argc, const char * argv[]) {
    /*
     编译预处理指令
     
        #开头的是编译预处理指令
        它们不是C语言的成分，但是C语言程序离不开它们
        #define用来定义一个宏
     
            如何看到编译这个过程（保存编译过程中的临时文件，加--save-temps选项）：
            终端下 gcc main.c -o 1.out --save-temps 【 main.c -> main.i(预处理后的文件) -> main.s(汇编代码)-> main.o(目标代码文件) 1.out(可执行文件) 】
            tail main.i 看到后面几行中PI被替换成值
     
     宏
     
        #define <名字> <值>
        注意结尾不能加分号，因为不是C的语句
        名字必须是一个单词，值可以是各种东西
        在C语言的编译器开始编译之前，编译预处理程序(cpp)会把程序中的名字换成值
            完全的文本替换
        gcc --save-temps
     
        如果一个宏的值中有其他的宏的名字，也是会被再次替换
        如果一个宏的值超过一行，最后一行之前的行末需要加\
        宏的值后面出现的注释不会被当做宏的值得一部分，C语言的注释有效
     
     没有值的宏
     
        #define _DEBUG
        这类宏是用于条件编译的，后面有其他的编译预处理指令来检查这个宏是否已经被定义过了（如果定义了执行这一部分代码，没有定义执行另一部分代码）
     
     预定义的宏
     
        __LINE__    // 当前代码行号
        __FILE__    // 源代码包含路径的文件名
        __DATE__    // 编译时日期
        __TIME__    // 编译时时间
        __STDC__    // 当要求程序严格遵循ANSIC标准时，标识符__STDC__就会被赋值为1
     
     带参数的宏
        
        #define cube(x) ( (x) * (x) * (x) )
        宏可以带参数
        可以带多个参数
            #define MIN(a, b) ((a) > (b) ? (b) : (a))
        也可以组合（嵌套）使用其它宏
     
        在大型程序的代码中使用非常普遍（在代替函数时运行效率比函数高，但是代码大小比函数大）
        可以非常复杂，如“产生”函数
            在#和##这两个运算符的帮助下
        存在中西方文化差异（国外使用宏的项目更多）
        部分宏会被inline函数替代
     
     错误定义的宏
     
        #define RADTODEG1(x) (x * 57)
        #define RADTODEG2(x) (x) * 57
     
     带参数的宏的原则
     
        一切都要括号
            整个值要括号
            参数出现的每个地方都要括号
        #define RADTODEG(x) ((x) * 57.3)
     
     其它编译预处理指令
        
        条件编译
        error
        ...
     
     */
    printf("%f\n", 2*PI); // 6.283180
    
    printf(FORMAT, PI2); // 6.283180
    
    PRT; // 3.141590 6.283180
    
    printf("%s:%d\n", __FILE__, __LINE__); // Users/weichen/.../main.c:66  #通常用于调试
    printf("%s:%s\n", __DATE__, __TIME__); // Jul 15 2015:01:47:36         #区分程序版本
    
    if (__STDC__ == 1) {
        printf("ANSIC\n");
    } else {
        printf("Not ANSIC\n");
    }
    
    
    int i = 2;
    printf("%d\n", cube(5)); // 125
    printf("%d\n", cube(i)); // 8
    printf("%d\n", cube(i+2)); // 64
    
    printf("%f\n", RADTODEG1(5+2)); // 119.600000
    printf("%f\n", 180/RADTODEG2(1)); // 10314.000000  #我们希望的是180/57.3, 而实际却不是
    
    return 0;
}
