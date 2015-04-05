//
//  main.c
//  demo12
//
//  Created by weichen on 14/12/27.
//  Copyright (c) 2014年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //阶乘
    int n;
    
    printf("请输入一个数：");
    
    scanf("%d", &n);
    
    int i = 1;
    int total = 1;
    /*
    while(i <= n) {
        total *= i;
        i++;
    }
    */
    
    /*
    for(i; i<=n; i++) {
        total *= i;
    }
    */
    
    
    for(int i=2; i<=n; i++) {
        total *= i;
    }
    
    
    /*
    int temp = n;
    for(n; n>=i; n--) {
        total *= n;
    }

    printf("%d的阶乘为%d", temp, total);
    */
    
    printf("%d的阶乘为%d", n, total);
     
    return 0;
}
