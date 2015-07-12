//
//  main.c
//  demo52
//
//  Created by weichen on 15/7/8.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct _node {
//    int value;
//    struct _node *next;
//} Node;

int main(int argc, const char * argv[]) {
    /*
     链表
     
     可变数组的缺陷：
        拷贝需要花时间，如果原数组很大，会很慢
        由于新数组需要申请更大的空间，由于之前还没free掉，总有一个时间点会出现尽管总内存够但无法再申请足够使用的情况
        所以可变数组不够高效
     
     解决办法：
        linked blocks，no copy
        就只申请block那么大的内存，与原来的内存空间链起来
     
     理想中的效果：
         |-------------|
         |   内存1      |---+
         |-------------|   |
      +--------------------+
      |  |-------------|
      +->|   block     |---+
         |-------------|   |
      +--------------------+
      |  |-------------|
      +->|   block     |
         |-------------|
     
     实际中：
            head
             |
         |-------------|    |--------------|    |-------------|
         | 数据 | point |--->| 数据 | point |--->| 数据 | point |
         |-------------|    |--------------|    |---------|---|
                                                          -
            整个结构叫做链表，其中带有数据的叫做结点
     
            让last一开始等于第一个的数据，看next有没有东西，让last所指那个东西的下一个，于是last指向了第二个的数据
     */
    
    Node *head = NULL;
    int number;
    do {
        scanf("%d\n", &number);
        
        if ( number != -1 ) {
            // add to linked-list
            Node *p = (Node*)malloc(sizeof(Node));  // 为结构分配一块内存空间
            p->value = number;                      // 初始化值为number
            p->next = NULL;                         // 初始化第一个的next为null，即下一个为null
            // find the last
            Node *last = head;                      // 初始化：最后一个就是当前的这个
            if ( last ) {                           // 如果last不为null了
                while ( last->next ) {              // 如果最后一个还有next的话，last就是last的next
                    last = last->next;              // 当循环停止时，last所指的就是最后一个
                }
                // attach
                last->next = p;
            } else {
                head = p;                           // 只有第一个，head为p
            }
        }
    } while ( number != -1 );
    
    return 0;
}