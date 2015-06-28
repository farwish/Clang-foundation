//
//  main.c
//  demo44
//
//  Created by weichen on 15/6/27.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

enum COLOR {RED, YELLOW, GREEN, NumCOLORS};

int main(int argc, const char * argv[]) {
    /*
     套路：自动计数的枚举(如：NumCOLORS)
     这样需要遍历所有的枚举量或者需要建立一个用枚举量做下标的数组的时候就很方便了
     
     枚举量：声明枚举量的时候可以指定值
        enum COLOR {RED=1, YELLOW, GREEN = 5, NumCOLORS};
     */
    int color = -1;
    char *ColorNames[NumCOLORS] = {
        "red", "yellow", "green",
    };
    char *colorName = NULL;
    
    printf("输入颜色代码：");
    scanf("%d", &color);
    if (color >=0 && color < NumCOLORS) {
        colorName = ColorNames[color];
    } else {
        colorName = "unknown";
    }
    
    printf("颜色是：%s\n", colorName);
    
    /*
     虽然枚举类型可以当作类型使用，但是实际上很少用；
     如果有意义上排比的名字，用枚举比const int方便；
     枚举比宏(macro)好，因为枚举有int类型。
     */
    
    return 0;
}
