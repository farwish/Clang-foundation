//
//  main.c
//  demo9
//
//  Created by weichen on 14/12/18.
//  Copyright (c) 2014年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //使用if判断计算时间差
    
    int hour1, minute1;
    int hour2, minute2;
    
    printf("请输入小时和分钟：");
    scanf("%d %d", &hour1, &minute1);
    
    printf("请输入第二个小时和分钟：");
    scanf("%d %d", &hour2, &minute2);
    
    int h = hour2 - hour1;
    
    int m = minute2 - minute1;
    
    if( m < 0) {
        m = m + 60;
        h--;
    }
    
    printf("时间差为：%d小时%d分钟", h, m);
    
    //printf("%d\n", 1==2==0);
    
    return 0;
}
