//
//  main.c
//  demo22
//
//  Created by weichen on 15/2/4.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    // 函数参数表中的数组(a[])实际上是指针, 因此也可以写成*a作为参数形式, 但不能使用sizeof得到正确值。
    
    int a[] = {1, 3, 5, 6, 8, 19};
    
    int min,max;
    
    printf("main sizeof(a)=%lu\n", sizeof(a));  //main sizeof(a)=24
    
    printf("main a=%p\n", a);                   //main a=0x7fff5fbff820
    
    minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
    
    printf("a[0]=%d\n", a[0]);                  //a[0]=1

    printf("min=%d, max=%d\n", min, max);
    
    int *p = &min;
    printf("*p=%d\n", *p);      //*p=1
    printf("p[0]=%d\n", p[0]);  //p[0]=1, 对于指针变量，可以采用数组的写法
    printf("*a=%d\n", *a);      //*a=1
    
    //int b[] ----> int * const b;
    
    return 0;
}


int minmax(int a[], int len, int *min, int *max) {
    
    //注: sizeof an arra function parameter will return size of 'int *' instead of 'int []'
    printf("minmax sizeof(a)=%lu\n", sizeof(a));//minmax sizeof(a)=8 , 32位架构下为4
    
    printf("minmax a=%p\n", a);                 //minmax a=0x7fff5fbff820
    
    *min = *max = a[0];
    
    return 0;
}

//以下四种函数原型（作为参数）是等价的：
/*
int sum(int *ar, int n);
int sum(int *, int);
int sum(int ar[], int n);
int sum(int [], int);
*/

//数组变量是特殊的指针

//数组变量本身表达地址，所以
    //int a[10]; int *p = a; //无需用&取地址
    //int b == &a[0]; //但是数组单元表达的是变量，需要用&取地址

//[]运算符可以对数组做，也可以对指针做
    //p[0] <==> a[0]

//*运算符可以对指针做，也可以对数组做
    //*a = 20;

//数组变量是const的常量指针，所以不能被赋值
    //int a[] <==> int * const a =
