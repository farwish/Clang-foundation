//
//  main.c
//  demo41
//
//  Created by weichen on 15/6/27.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

const int red = 0;
const int yellow = 1;
const int green = 2;

int main(int argc, const char * argv[]) {
    /*
     常量符号化：用符号而不是具体的数字来表示程序中的数字
     */
    int color = -1;
    char *colorName = NULL;
    printf("输入颜色代码：");
    scanf("%d", &color);
    switch (color) {
        case red:
            colorName = "red";
            break;
        case yellow:
            colorName = "yellow";
            break;
        case green:
            colorName = "green";
            break;
        default:
            colorName = "unknow";
            break;
    }
    printf("颜色是：%s\n", colorName);
    
    return 0;
}
