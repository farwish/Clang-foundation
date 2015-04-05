//
//  main.c
//  demo11
//
//  Created by weichen on 14/12/22.
//  Copyright (c) 2014年 weichen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    //猜数
    srand(time(0));
    int a = rand()%100 + 1;
    int number;
    int count = 0;
    
    
    do{
        printf("请输入1-100的数：");
        scanf("%d", &number);
        
        count++;
        
        if(a > number) {
            printf("您输的数小了！\n");
        }else if(a < number){
            printf("您输的数大了！\n");
        }else{
            printf("恭喜，您在第%d次猜对了！", count);
        }
    }while(a != number);

    return 0;
}
