//
//  main.c
//  demo28
//
//  Created by weichen on 15/4/6.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 浮点类型
    /*
     类型     字长      范围                                                      有效数字
     float    32   ±(1.20*10^-38 ~ 3.40*10^38), 0, ±inf(无穷大), nan(非数字)       7(准确的位数)
     double   64   ±(2.2*10^-308 ~ 1.79*10^308),0, ±inf, nan                     15
     
     类型     scanf     printf
     float     %f       %f，%e(科学计数法)
     double    %lf      %f，%e
     */
    
    double ff = 12.345;
    printf("%e, %f\n", ff, ff);     //1.234500e+01, 12.34500
    printf("%E\n", ff);             //1.234500E+01
    
    //在%和f之间加上.n可以指定输出小数点后几位，这样的输出是做四舍五入的
    printf("%.3f\n", -0.0049);      //-0,005    小数点后保留三位
    printf("%.30f\n", -0.0049);     //-0.004899999999999999841793218991
    printf("%.3f\n", -0.00049);     //0.000
    
    printf("%f\n", 1.0/0.0);        //inf
    printf("%f\n", -1.0/0.0);       //-inf
    printf("%f\n", 0.0/0/0);        //nan
    //printf("%d\n", 12/0);           //无法编译通过,无穷大无法用整数表达，可以用浮点数表达
    
    float a, b, c;
    a = 1.34f;
    b = 1.22f;
    c = a + b;
    if( c == 2.56) {
        printf("a = b\n");
    } else {
        printf("a != b, c=%.10f 或 %f\n", c, c); //a != b, c=2.5599999428 或 2.560000(七位有效数字四舍五入而来)
    }
    
    //浮点运算的精度
    /*
     带小数点的字面量是double而非float
     float需要用f或F后缀来表明身份
     float1 == float2 可能失败
     fabs(f1-f2) < 1e^-12   #计算绝对值与最小误差比较，来判断是否相等
     */
     
    //浮点数的内部表达
    /*
     浮点数在计算时是由专用的硬件部件实现的
     计算double和float所用的部件是一样的
     */
    
    //选择浮点类型
    /*
     如果没有特殊需要，只使用double
     现代CPU能直接对double做硬件运算，性能不会比float差，在64位的机器上，数据存储的速度也不比float慢
     
     */
    
    return 0;
}
