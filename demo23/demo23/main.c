//
//  main.c
//  demo23
//
//  Created by weichen on 15/2/5.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
     字符类型char：
     1. 用单引号表示的字符字面量，如'a', '1'
     2. ''也表示字符
     3. printf和scanf里用%0来输入输出字符
     */
    
    char c = '1';       //字符1
    char d = 1;
    char c2 = 'a';      //字符a
    int i;
    
    printf("c = %c\n", c);  //1
    
    printf("c = %d\n", c);  //49 ，以整数形式
    
    printf("c2 = %d\n", c2);//97，代表证书
    
    printf("d = %c\n", d);  //空
    
    if(c == d) {
        printf("c = d\n");
    } else {
        printf("c != d\n");
    }
    
    
    printf("==========\n");
    
    
    /*
     scanf只能以整数形式输入：
     1. 输入49时，%c形式输出1，%d形式输出49
     2. '1'的ASCII编码是49，所以当i==49时，它代表'1'
     */
    scanf("%d", &i); //
    
    printf("i = %c\n", i);
    
    printf("i = %d\n", i);
    
    if(49 == '1') {
        printf("right!\n");
    }
    
    
    printf("==========\n");
    
    
    /*
     字符计算：
     1. 一个字符加一个数字得到ASCII码表中那个数之后的字符
     2. 两个字符的减，得到它们在表中的距离
     */
    char e = 'A';
    e++;
    printf("%c\n", e);  //B
    
    int f = 'Z' - 'A';
    printf("%d\n", f);  //25
    
    //字母在ASCII表中是顺序排列的
    //大写字母和小写字母是分开排列的，'a'-'A'可以得到两段的距离；
    //所以把一个大写字母变成小写字母：a+'a'-'A'，把一个小写字母变成大写字母：a+'A'-'a'
    
    
    printf("===========\n");
    
    
    /*
     逃逸字符：
     用来表达无法打印出来的控制字符或特殊字符，由一个反斜杠“\”开头，后面跟上另一个字符，这两个字符合起来，组成了一个字符
     \b 回退一格(但不删除)
     \t 制表位，每行固定的位置
     \n 换行(由于打字机上换行和回车是两个字符，所以c语言也是将它们分开的)
     \r 回车
     \" 双引号
     \' 单引号
     \\ 反斜杠本身
     */
    printf("123\b\n456\n");
    
    printf("123\t456\n");
    printf("12\t456");
    
    return 0;
}
