#ifndef _ARRAY_H_
#define _ARRAY_H_

const int BLOCK_SIZE = 2;
typedef struct
{
    int* array;
    int size;
}Array;

Array array_creat(int init_size);//创建一个数组
void array_free(Array* a);//回收空间
int  array_size(Array* a);//目前有多少个空间可以用
int* array_at(Array* a, int index);//访问数组当中某个单元:可以读也可以写（即可以做左值也可以做右值）
void array_inflate(Array* a, int more_size);//数组增容
void array_set(Array* a, int index, int value);//向数组中写入东西


#endif

