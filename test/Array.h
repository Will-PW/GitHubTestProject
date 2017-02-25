//
//  Array.h
//  test
//
//  Created by 彭伟 on 16/1/24.
//  Copyright © 2016年 彭伟. All rights reserved.
//

#ifndef Array_h
#define Array_h

typedef struct{
    void *array;
    int size;
} Array;

Array array_crete(int init_size);
void array_free(Array *a);
int array_size(const Array *a);
int* array_at(Array *a, int index);
void array_inflate(Array *a,int more_size);

Array array_crete(int init_size)
{
    Array arr = {NULL,init_size};
    arr.array = (int*)malloc(sizeof(int)*init_size);
    return arr;
}



#endif /* Array_h */
