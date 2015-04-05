//
//  main.c
//  demo19
//
//  Created by weichen on 15/1/30.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    //二维数组，三行五列矩阵
    int a[3][5];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            a[i][j] = i * j;
        }
    }
    
    //二维数组的初始化
    int b[][5] = {
        {1, 2, 3, 4, 5},
        {3, 4, 5, 6, 8},
    };
    
    //1.列数是必须给出的，行数可以由编译器来数。
    //2.每一行一个{}，逗号分隔
    //3.最后的逗号可以存在，有古老的传统
    //4.如果省略，表示补零
    //5.也可以用定位（C99 ONLY）
    
    //int c[][3] = {{0}, {1}, {2}};   //三行三列，每列自动补零
    //printf("%d", c[1][2]);
    
    
    
    int d[][3] = {1, 2, 4, 5, 6, 7, 8, 9, 3,};//初始化为3列,自动分为三行
    int i, j, k = 2;
    for(i = 0; i < 3; i++) {
        printf("%d", d[k][i]);//循环输出d[2][i]
    }
    
    
    return 0;
}
