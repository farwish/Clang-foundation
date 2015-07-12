#ifndef _NODE_H_
#define _NODE_H_

typedef struct _node {
    int value;          // 数据
    struct _node *next; // 指针，下一个指向它自己（不能写成 Node *next，因为在这之后才定义的Node）
} Node;                 // 定义Node类型

#endif