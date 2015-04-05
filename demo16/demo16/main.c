//
//  main.c
//  demo16
//
//  Created by weichen on 15/1/19.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

//  main.c
//  Created by weichen on 15/1/14.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main() {
    
    //输入一个数，并输出平均值和大于平均值的数
    //要点：需要存放输入的这些数
    
    int x = 0;
    int n = 1;
    double total = 0;
    double per = 0;
    int number[100]; //1. 定义数组
    
    printf("请输入一些数：");
    scanf("%d", &x);
    
    while(x != 0)
    {
        number[n] = x;    //2. 数组元素赋值
        total += x;
        n++;
    }
    
    if(n > 0)
    {
        per = total/n;
        
        printf("平均数为：%f\n", per);
        
        printf("大于平均数的数为：");
        
        for(int i = 0; i <= n; i++)
        {
            if(number[n] > per)   //3. 使用数组元素
            {
                printf("%d\t", number[i]); //4. 遍历数组
            }
        }
    }
    
    return 0;
}