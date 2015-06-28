//
//  main.c
//  demo42
//
//  Created by weichen on 15/6/27.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

enum COLOR {RED, YELLOW, GREEN};

int main(int argc, const char * argv[]) {
    /*
     枚举：用枚举而不是定义独立的const int变量
     */
    int color = -1;
    char *colorName = NULL;
    
    printf("输入颜色代码：");
    scanf("%d", &color);
    switch (color) {
        case RED: colorName = "red"; break;
        case YELLOW: colorName = "yellow"; break;
        case GREEN: colorName = "green"; break;
        default: colorName = "unknow"; break;
    }
    printf("颜色是：%s", colorName);
    
    return 0;
}
