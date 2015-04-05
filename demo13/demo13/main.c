//
//  main.c
//  demo13
//
//  Created by weichen on 14/12/28.
//  Copyright (c) 2014年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 用1角，2角，5角凑成5元的所有的方式
    /*
    int one = 0;
    int two = 0;
    int five = 0;
    for(one = 1; one < 50; one++) {
        for(two = 1; two < 50/2; two++) {
            for(five = 1; five < 50/5; five++) {
                if(one + two*2 + five*5 == 50) {
                    printf("%d个1角加%d个2角加%d个5角可以凑成5元！\n", one, two, five);
                }
            }
        }
    }
     */
 
        int one = 0;
        int two = 0;
        int five = 0;
        int x = 0;
        int sign = 0;
        printf("请输入：");
        scanf("%x", &x);
        for(one = 1; one < x*10; one++) {
            for(two = 1; two < x*10/2; two++) {
                for(five = 1; five < x*10/5; five++) {
                    if(one + two*2 + five*5 == 50) {
                        printf("%d个1角加%d个2角加%d个5角可以凑成%x元！\n", one, two, five, x);
                        sign = 1;
                    }
                }
                if(sign == 1) {
                    goto out;
                }
            }
        }
        
        out:
    
        return 0;
}
