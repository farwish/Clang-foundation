//
//  main.c
//  demo5
//
//  Created by weichen on 14/12/16.
//  Copyright (c) 2014年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

        int amount;
    
        int price;
    
        /*
        printf("请输入两个整数：");
        scanf("%d %d", &amount, &price);    //输入的两个数以空格或回车隔开; 注意：遇到输入非数值如字符串时，scanf将出错
        printf("%d + %d = %d \n", amount, price, amount + price);
        */
    
        printf("请输入票面：");
        scanf("%d", &amount);
    
        printf("请输入金额：");
        scanf("%d", &price);          //注意别忘了取地址符
    
        int change = amount - price;
        
        printf("找您%d元\n", change);
}
