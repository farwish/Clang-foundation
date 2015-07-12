#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct {
    int *array;
    int size;
} Array;       // Array 不定义成指针类型 *Array 的原因：定义成变量使用范围更广，如果定义一个指针类型，那么 array p 其实不容易看出是指针

// 函数原型
Array array_create(int init_size);
void array_free(Array *a);
int array_size(const Array *a);
int* array_at(Array *a, int index);
void array_set(Array *a, int index, int value);
int array_get(const Array *a, int index);
void array_inflate(Array *a, int more_size);

#endif