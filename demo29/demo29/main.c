//
//  main.c
//  demo29
//
//  Created by weichen on 15/4/8.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    // bool
    /*
     C语言本没有逻辑类型，在内部计算中使用整数表达关系运算和逻辑运算的结果，0表示false，而非0的值表示true。
     在C99中，也没有固定的逻辑类型，但是通过一个头文件定义了可以直接使用的true和false这两个值，以及bool这个类型。
     逻辑运算则是C语言固有的成分。
     
     #include <stdbool.h>
     之后就可以使用bool和true、false
    */
     
    bool a = 6 < 5;
    bool b = true;
    
    printf("%d\n", a);  //0
    printf("%d\n", b);  //1
    
    //逻辑运算
    /*
     逻辑运算是对逻辑量进行的运算，结果只有0或1
     逻辑量是关系运算或逻辑运算的结果
     ！ 逻辑非
     && 逻辑与
     || 逻辑或
     
     如果要表达数学中的区间，如：x∈(4,6) 或 x∈[4,6] 应该如何写C的表达式？
     像 4 < x < 6 这样的式子，不是C能正确计算的式子，因为 4 < x 的结果是一个逻辑值(0或1),
     应该写成 (x > 4 && x < 6) 或 (x >= 4 && x <= 6)
     判断一个字符a是否是大写字母？ a >= 'A' && a <= 'Z'
     
     优先级    运算符         结合性
     1        ()            从左到右
     2        ! + - ++ --   从右到左（单目+和-）
     3        * / %         从左到右
     4        + -           从左到右
     5        < <= > >=     从左到右
     6        == !=         从左到右
     7        &&            从左到右
     8        ||            从左到右
     9     = += -= *= /= %= 从右到左
     
     */
    
    return 0;
}
