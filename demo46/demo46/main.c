//
//  main.c
//  demo46
//
//  Created by weichen on 15/6/29.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

struct point {
    int x;
    int y;
};

void getStruct(struct point);
struct point getStruct2(void);
void output(struct point);

int main(int argc, const char * argv[])
{
    /*
     - 结构和函数 -
     
     结构作为函数参数：
        int numberOfDays(struct date d);
        
        整个结构可以作为参数的值传入函数
        这时候是在函数内新建一个结构变量，并复制调用者的结构的值
        也可以返回一个结构
        这与数组是不一样的
     
     输入结构：
        没有直接的方式可以一次scanf一个结构（就像%d这种）
        写一个函数来读入结构
            ->
        但是读入的结构如何送回来呢？
        记住C在函数调用时是传值的
            在函数中的p与main中的y是不同的
            在函数读入了p的数值之后，没有任何东西回到main，所以y还是{0, 0}
     
     解决方案：
        之前的方案，把一个结构传入了函数，然后在函数中操作，但是没有返回回去
            问题在于传入函数的是外面那个结构的克隆体，而不是指针
                传入结构和传入数组是不同的
        在这个输入函数中，完全可以创建一个临时的结构变量，然后把这个结构返回给调用者
     
     结构指针作为参数：
        如果一个大的结构传到函数里，通常更有效的是传递一个指针而不是拷贝整个结构
     
     指向结构的指针：
        struct date {
            int month;
            int day;
            int year;
        } myday;    //声明一个date结构和结构变量myday
     
        struct date *p = &myday;
        (*p).month = 12;    //点运算符
        p->month = 12;      //用->运算符表示指针所指的结构变量中的成员
     
     结构指针参数：
     
        struct point* getStruct2(struct point *p)
        {
            scanf("%d", &(p->x));
            scanf("%d", &(p->y));
            return p;
        }
     
        void output(struct point p)
        {
            printf("%d, %d", p.x, p.y);
        }
     
        void print(const struct point *p)
        {
            printf("%d, %d", p->x, p->y);
        }
     
        void main()
        {
            struct point y = {0, 0};
            getStruct2(&y);
            output(y);
            output(*getStruct2(&y));
            printf(getStruct2(&y));
            getStruct(&y)->x = 0;
            *getStruct(&y) = (struct point){1, 2};
        }

     */
    
    struct point y = {0, 0};
    getStruct(y);
    output(y);      //0, 0  传的是结构变量y的"值"，而不是指针，所以在getStruct内即使成员变量被赋值，不会影响y
    
    y = getStruct2();   //两个结构变量可以赋值
    output(y);      //4, 5
    
    return 0;
}

void getStruct(struct point p)
{
    scanf("%d", &p.x);  //2
    scanf("%d", &p.y);  //3
    printf("%d, %d\n", p.x, p.y);   //2, 3
}

struct point getStruct2(void)
{
    struct point p; //本地变量
    scanf("%d", &p.x);  //4
    scanf("%d", &p.y);  //5
    printf("%d, %d\n", p.x, p.y);   //4, 5
    return p;
}

void output(struct point p)
{
    printf("%d, %d\n", p.x, p.y);     //0, 0
}