//
//  main.c
//  demo4
//
//  Created by weichen on 14/12/13.
//  Copyright (c) 2014年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //求1+2+3+4+5+。。。+100
    
    int i = 0;
    int sum = 0;
    //1.while循环
    while(i <= 100) {
        sum = sum + i;
        i++;
    }
    printf("1+2+3+4+...+100=%d \n", sum);
    
    int i2 = 0;
    int sum2 = 0;
    //2.do while循环
    do{
        sum2 = sum2 + i2;
        i2++;
    }while(i2 <= 100);
    printf("1+2+3+4+...+100=%d \n", sum2);
    
    int i3 = 0;
    int sum3 = 0;
    //3.for循环
    for(i3=0; i3<=100; i3++) {
        sum3 += i3;
    }
    printf("1+2+3+4+...+100=%d \n", sum3);
    
}
