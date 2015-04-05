//
//  main.c
//  demo3
//
//  Created by weichen on 14/12/13.
//  Copyright (c) 2014年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //输入学生成绩
    int score;
    printf("please input:\n");
    
    scanf("%d", &score);
    
    if(score >= 60) {
        printf("ok\n");
    }else{
        printf("sorry\n");
    }
    
    switch(score/10)
    {
        case 10:
        case 9:
            printf("优秀\n");
            break;
        case 8:
            printf("良好\n");
            break;
        case 7:
            printf("还行\n");
            break;
        case 6:
            printf("及格\n");
            break;
        default:
            printf("不及格\n");
    }
}