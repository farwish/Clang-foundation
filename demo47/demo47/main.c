//  main.c
//  Created by weichen on 15/7/5.
//  Copyright (c) 2015年 weichen. All rights reserved.

#include <stdio.h>

struct time {
    int hour;
    int minutes;
    int seconds;
};

struct time timeUpdate(struct time now);

int main(int argc, const char * argv[]) {
    /*
     - 结构中的结构 -
     
     结构数组
        struct date dates[100]; // 声明一个结构变量为数组
        struct date dates[] = { // 初始化数组,每一个成员是struct
            {4,5,2005}, {2,4,2005}
        };
     
     结构中的结构
        struct dateAndTime {
            struct date sdate;
            struct time stime;
        };
     
     嵌套的结构
        struct point {
            int x;
            int y;
        };
        struct rectangle {
            struct point pt1;
            struct point pt2;
        };
        如果有变量：
            struct rectangle r;
        就可以有：
            r.pt1.x 、r.pt1.y, r.pt2.x 和 r.pt2.y
     
        如果有变量定义：
            struct rectangle r.*rp;
            rp = &r;
        那么下面的四种形式是等价的：
            r.pt1.x         #正常形式
            rp->pt1.x       #指针访问结构变量的成员
            (r.pt1).x       #加括号形式，不影响
            (rp->pt1).x     #加括号形式，不影响
        但是没有rp->pt1->x（因为pt1不是指针），示意图：
     
                |--------------|
                |      |-----| |
            r . |pt1 . |x    | |
                |      |-----| |
            +-> |      |y    | |
            |   |      |-----| |
            |   |pt2 .  x      |
            |   |       y      |
            |   |--------------|
            |
            |   |--------------|
            rp  | 指针          |
                |--------------|
     
    结构中的结构的数组：
        struct point {
            int x;
            int y;
        };
        
        struct rectangle {
            struct point p1;
            struct point p2;
        }
     
        void printRect(struct rectangle r)
        {
            printf("<%d, %d> to <%d, %d>\n", r.p1.x, r.p1.y, r.p2.x, r.p2.y);
        }
     
        int main(int argc, char const *argv[])
        {
            int i;
            struct rectangle rects[] = {    //2rectangles， 1,2是rects[0]的pt1的x和y，3,4是rects[0]的pt2的x和y
                {{1,2},{3,4}},
                {{5,6},{7,8}}
            };
            for (i=0; i<2; i++) {
                printRect(rects[i]);
            }
        }
     
     */
    
    struct time testTimes[] = {
        {11,59,59}, {12,0,0}, {1,29,59}, {23,59,59}, {19,12,27}
    };
    
    int i;
    
    for (i=0; i<5; i++) {
        printf("Time is %.2i:%.2i:%.2i\n", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
        
        testTimes[i] = timeUpdate(testTimes[i]);
        
        printf("one second later is %.2i:%.2i:%.2i\n", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
    }
    
    // 结构成员变量的sizeof即为类型的大小，结构变量的sizeof为成员变量的sizeof之和
    // 结构内成员之间连续，相邻成员的地址差不等于对应成员的sizeof
    struct time ab = {1, 5, 7};
    printf("%ld, %ld, %ld, %ld\n", sizeof(ab), sizeof(ab.hour), sizeof(ab.minutes), sizeof(ab.seconds)); //12,4,4,4
    printf("%p, %p, %p, %p, %ld\n", &ab, &(ab.hour), &(ab.minutes), &(ab.seconds), (&(ab.minutes) - &(ab.hour))); //0x7fff5fbff798, 0x7fff5fbff798, 0x7fff5fbff79c, 0x7fff5fbff7a0, 1
    
    return 0;
}


struct time timeUpdate(struct time now)
{
    ++now.seconds;
    if (now.seconds == 60) {
        now.seconds = 0;
        ++now.minutes;
        
        if (now.minutes == 60) {
            now.minutes = 0;
            ++now.hour;
            
            if (now.hour == 24) {
                now.hour = 0;
            }
        }
    }
    
    return now;
}