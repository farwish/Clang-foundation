//
//  main.c
//  demo8
//
//  Created by weichen on 14/12/18.
//  Copyright (c) 2014年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    printf("输入一个三位数：");
    scanf("%d", &a);
    
    int bai = a/100;            //百位数
    
    int shi = a%100 / 10;       //十位数
    
    int ge = a%100 % 10;        //个位数
    
    printf("倒序的三位数是：%d", ge*100 + shi*10 + bai);
    
}
