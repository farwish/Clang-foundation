//
//  main.c
//  demo53
//
//  Created by weichen on 15/7/12.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// 定义一个数据类型表示list
typedef struct _list {
    Node* head;
} List;

void add(List* list, int number);

int main(int argc, const char * argv[]) {
   
    List list;
    int number;
    list.head = NULL;
    
    do {
        scanf("%d\n", &number);
        
        if (number != -1) {
            add(&list, number);
        }
    } while(number != -1);
    
    return 0;
}

void add(List* pList, int number)
{
    Node *p = (Node*)malloc(sizeof(Node));
    
    p->value = number;
    p->next = NULL;
    
    Node *last = pList->head;
    if (last) {
        while (last->next) {
            last = last->next;
        }
        last->next = p;
    } else {
        pList->head = p;
    }
}