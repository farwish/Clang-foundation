//
//  main.c
//  demo17
//
//  Created by weichen on 15/1/19.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

//
//  demo.c
//  demo16
//
//  Created by weichen on 15/1/19.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main()
{
    //输入0-9范围内的数字，求输入每个输入的数字的次数
    const int number = 9;   //数组大小
    int x;
    int count[number];  //定义数组
    int i;
    
    for(i=0; i<=number; i++)
    {
        count[i] = 0;   //初始化数组
    }
    
    printf("请输入：");
    scanf("%d", &x);
    
    while(x != -1)
    {
        if(x>=0 && x<=9)
        {
            count[x]++; //数组参与运算
        }
        scanf("%d", &x);
    }


    for(i=0; i <= number; i++)
    {
        printf("%d:%d\n", i, count[i]);
    }
    
    
    return 0;
}