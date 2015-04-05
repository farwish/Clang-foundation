//
//  main.c
//  demo7
//
//  Created by weichen on 14/12/17.
//  Copyright (c) 2014年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //求平均值
    /*
    int a,b;
    printf("请输入两个数：");
    scanf("%d %d", &a, &b);
    printf("平均值为：%f", (a + b) / 2.0);
     */
    
    int a = 5;
    int b = 8;
    int c;
    
    c = a;
    a = b;
    b = c;
    
    printf("a=%d b=%d", a, b);
    
}
