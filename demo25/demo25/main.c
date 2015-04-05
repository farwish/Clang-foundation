//
//  main.c
//  demo25
//
//  Created by weichen on 15/3/10.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 字符串输入输出
    char string[8];
    char string2[8];
    
    //安全的输入
    //在%和s之间的数字表示最多允许读入的字符数量，这个数字应该比数组的大小小一
    scanf("%7s", string);   //12345678
    scanf("%7s", string2);
    printf("%s##%s##", string, string2);    //1234567##8##
    
    //常见错误
    //char *string; scanf("%s", string);
    //以为char*是字符串类型，定义了一个字符串类型的变量string就可以直接使用了
    //由于没有对string初始化为0，所以不一定每次运行都出错
    
    //这是一个空的字符串
    char buffer[100] = ""; //buffer[0] == "\0";
    
    //char buffer[] = ""; //这个数组的长度只有1，buffer[0] == "\0"，放不下任何字符串
    
    return 0;
}
