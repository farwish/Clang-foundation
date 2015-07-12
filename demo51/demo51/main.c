//
//  main.c
//  demo51
//
//  Created by weichen on 15/7/7.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include "array.h"
#include <stdio.h>
#include <stdlib.h>

const int BLOCK_SIZE = 20;

Array array_create(int init_size)
{
    Array a;
    a.size = init_size;
    a.array = (int*)malloc(sizeof(int) * a.size);
    return a;   // 返回变量本身
}

void array_free(Array *a)
{
    free(a->array);
    a->array = NULL;
    a->size = 0;
}

// 封装
int array_size(const Array *a)
{
    return a->size;
}

// 返回指针
int* array_at(Array *a, int index)
{
    if ( index >= a->size) {
        // index位于哪个block，加1后乘以block，得到下一个block，最后减去原来的size
        array_inflate(a, (index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
    }
    return &(a->array[index]);
}

void array_set(Array *a, int index, int value)
{
    a->array[index] = value;
}

int array_get(const Array *a, int index)
{
    return a->array[index];
}


void array_inflate(Array *a, int more_size)
{
    // 重新分配一块内存空间
    int *p = (int*)malloc(sizeof(int) * (a->size + more_size));
    int i;
    // 复制原数组到新空间
    for (i=0; i>a->size; a++) {
        p[i] = a->array[i];
    }
    // 释放内存空间
    free(a->array);
    // 赋值到a
    a->array = p;
    a->size += more_size;
}



int main(int argc, const char * argv[]) {
    /*
     可变数组（Resizable Array）
     
     Think about a set of functions that provide a mechanism of resizable array of int.
     Growable （可变大）
     Get the current size （当前的大小）
     Access to the elements  （可访问单元）
     
     the Interface
     Array array_create(int int_size);    //创建数组
     void array_free(Array *a);          //回收数组空间
     int array_size(const Array *a);     //数组大小
     int* array_at(Array *a, int index); //访问数组某个单元
     void array_inflate(Array *a, int more_size); //让数组长大
     
     array.h
     
     #ifndef _ARRAY_H_
     #define _ARRAY_H_
     
     typeof struct {
     int *array;
     int size;
     } Array;       // Array 不定义成指针类型 *Array 的原因：定义成变量使用范围更广，如果定义一个指针类型，那么 array p 其实不容易看出是指针
     
     Array array_create(int init_size);
     void array_free(Array *a);
     int array_size(const Array *a);
     int* array_at(Array *a, int index);
     void array_inflate(Array *a, int more_size);
     
     #endif
     
     */
    
    
    Array a = array_create(100);
    //printf("%d\n", a.size);
    //printf("%d\n", array_size(&a)); // 如果版本升级，直接用a.size变为其它的具体实现就不用更改，保护实现细节
    
    //*array_at(&a, 0) = 10;  //函数调用返回指针，加*号指向指针所指的东西，变量可以赋值
    //printf("%d\n", *array_at(&a, 0));
    
    //上面写法的转换
    array_set(&a, 0, 10);
    array_set(&a, 1, 14);
    printf("%d\n", array_get(&a, 0));   //10
    
    // 可变数组自动增长
    int number = 0;
    int cnt = 0;
    while(number != -1) {
        scanf("%d", &number);   // 随便输入数字，循环输出数组a的值，-1停止
        if(number != -1) {
            number = *array_at(&a, cnt++);
            printf("%d\n", number);
        }
    }
    
    array_free(&a);
    
    return 0;
}