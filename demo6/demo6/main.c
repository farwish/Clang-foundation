//
//  main.c
//  demo6
//
//  Created by weichen on 14/12/16.
//  Copyright (c) 2014年 weichen. All rights reserved.
//

#include <stdio.h>

int main()
{
    //计算1小时30分钟与3小时20分的时间差
    /*
     步骤：1.使用变量存储数值
          2.设定换算方式(公式)
          3.得到需要的值
    */
    
    int hour1, minute1;
    int hour2, minute2;
    
    scanf("%d %d", &hour1, &minute1);  //读入用户的输入值
    scanf("%d %d", &hour2, &minute2);
    
    printf("时间差为%d小时%d分钟", ((hour2*60+minute2)-(hour1*60+minute1))/60, ((hour2*60+minute2)-(hour1*60+minute1))%60);
    
    return 0;
}