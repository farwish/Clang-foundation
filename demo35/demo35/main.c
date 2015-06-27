//
//  main.c
//  demo35
//
//  Created by weichen on 15/6/10.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // malloc：如果空间申请失败则返回0或者NULL
    
    void *p = 0;    //free可以释放0或NULL，避免free的地址没有被分配时出错，习惯初始化指针为0
    int cnt = 0;
    // 如果p的地址不是0（得到了地址），循环继续
    while( (p = malloc(100*1024*1024)) ) {
        cnt++;
    }
    printf("分配了%d00MB的空间\n", cnt);
    
    free(p);
    
    /*
    p = malloc(100*1024*1024);
    p++;        // pointer being freed was not allocated
    p = &i;     // pointer being freed was not allocated
    free(p);
    */
     
    /*
     把申请得到的空间还给“系统”
     申请过的空间，最终都应该要还
     只能还申请来的空间的首地址
     
     常见问题：
     申请了没有free，长时间运行内存逐渐下降：忘了或找不到合适的free的时机
     free过了再free
     地址变过了，直接取free
     */
    
    return 0;
}
