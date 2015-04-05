//
//  main.c
//  demo18
//
//  Created by weichen on 15/1/28.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 数组的集成初始化
//    int a[] = {1, 2, 6, 7, 9};
//    
//    for ( int i = 0; i < 5; i++)
//    {
//        printf("%d\t", a[i]);
//    }

    //声明一个长度12的数组，第一个元素赋值为1，其余为0
//    int a[12] = {1};
//    for ( int i = 0; i < 12; i++)
//    {
//        printf("%d\t", a[i]);
//    }
    
    
    //不使用循环，初始化数组
    //int a[12] = {0};
    
    
    //集成初始化时的定位
//    int a[12] = {[1]=2, 3, [4]=9};
//    用[x]在初始化数据时给出定位
//    没有定位的数据跟在前一个后面
//    其它位置的值补0
//    也可以不给出数组的大小，让编译器运算
//    适合初始化稀疏的数组
//
//    {
//        for(int i = 0; i < 12; i++) {
//            printf("%d\t", a[i]);   //0	2	3	0	9	0 ....
//        }
//    }
    
    /*
    int a[] = {1, 3};
    int length = sizeof(a)/sizeof(a[0]);
    int b[length];
    //数组变量本身不能被赋值，如：int b[] = a;错误
    //要把一个数组的值交给另一个数组，必须使用遍历，如下：
        for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
            b[i] = a[i];
        }
            {
                for(int i = 0; i < length; i++) {
                    printf("%d\t", a[i]);   //0	2	3	0	9	0 ....
                }
            }
    */
    
    //遍历数组作用：
    //赋值、初始化、判断值是否存在，计数
    //离开循环后，i不能再作为下标访问数组元素
    
    
    
    
    //数组作为函数参数时，往往必须用另一个参数来确定数组的大小
    //注意：1.数组作为函数参数时，不能给出数组的大小；2.不能再利用sizeof来计算数组个数。
    
    int a[] = {1, 3, 4, 8, 0, 34};
    
    int key;
    
    int length = sizeof(a)/sizeof(a[0]);
    
    printf("请输入一个数：");
    
    scanf("%d", &key);
    
    int location = search(key, a, length);
    
    if(location != -1)
    {
        printf("key:%d存在于数组a[]中。\n", key);
    }
    else
    {
        printf("数组a[]中不存在key:%d。\n", key);
    }
    
    return 0;
}

/**
 * 找出key在数组中的位置
 * @param key 位置
 * @param a 数组
 * @param length 数组长度
 * @return 存在则返回数组的位置，否则返回-1
 * 
 * int search(int key, int a[]; int length);
 */

int search(int key, int a[], int length)
{
    for(int i = 0; i < length; i++)
    {
        if(a[i] == key)
        {
            return i;
            break;
        }
        else
        {
            continue;
        }
    }
    
    return -1;
}
