//
//  main.c
//  test
//
//  Created by 彭伟 on 16/1/7.
//  Copyright © 2016年 彭伟. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Array.h"

//int chufa(int n1,int n2, int *jieguo);
//void minmax(int arr[], int len,int *min,int *max);
//void minmax2(int *arr,int len,int *min,int *max);

int main()
{
    //可变数组
    
    Array arr = array_crete(5);
    printf("%d \n",arr.size);
    
    int* ai = (int*)malloc(sizeof(int)*8);
    printf("%p \n",ai);
    
    //malloc(4);
    /*
     -- 字符串练习
     */

    /*
    int ch;
    
    while ( (ch=getchar()) != EOF) {
        printf("\n");
        putchar(ch);
        usleep(500);
        //sleep(1);
    }
    */
    
//    int n1;
//    int n2;
//    int jieguo;
//    printf("请输入两个整数,以逗号分隔：");
//    scanf("%d,%d",&n1,&n2);
//    if(chufa(n1, n2, &jieguo))
//    {
//        printf("%d / %d = %d\n",n1,n2,jieguo);
//    }
//    else
//    {
//        printf("程序出错了\n");
//    }
    
    /*
     --指针联系 01
    int a[] = {43,54,22,34,12,5,6,54,65,23,56};
    int len = sizeof(a)/sizeof(a[0]);
    int min;
    int max;
    minmax(a,len, &min, &max);
    
    printf("min=%d,max=%d\n",min,max);
    printf("%lu %lu\n",sizeof(a),sizeof(a[0]));
     
     */
    
    
    /*
     --指针联系 02
     
    
    int arr[] = {9,18,27,36,45,54,63,72,81,90};
    printf("001: %p \n",arr);
    int *p = arr;
    printf("002: %p \n",p);
    printf("002: %p \n",p+1);
    
    printf("003: %d \n", *(p+1));
    printf("004: %d \n", *p+1);
    
    printf("005: %d \n", *p++);
    printf("006: %d \n", *p);
    printf("007: %d \n", *++p);
    
    printf("008: %d \n", p[-2]);
    
    //printf("%lu %lu\n",sizeof(arr),sizeof(arr[17]));
    */
    
    /*
     --指针练习 03
     
    void *p;
    int cnt = 0;
    while ( (p=malloc(100*1024*1024)) ) {
        cnt++;
    }
    
    printf("分配了%d00MB内存\n",cnt);
     
     */
    return 0;
}

int chufa(int n1,int n2, int *jieguo){
    if(n2 == 0) return 0;
    else{
        *jieguo = n1/n2;
        return 1;
    }
}

void minmax(int arr[],int len,int *min,int *max)
{
    *min = *max = arr[0];
    //printf("%lu %lu\n",sizeof(arr),sizeof(arr[0]));
    for (int i = 0; i < len; i++) {
        
        if(arr[i] < *min)
            *min = arr[i];
        else if(arr[i] > *max)
            *max = arr[i];
    }
}

void minmax2(int *arr,int len,int *min,int *max)
{
    printf("%lu %lu\n",sizeof(arr),sizeof(arr[0]));
    *min = *max = arr[0];
    for (int i = 0; i < len; i++) {
        
        if(arr[i] < *min)
            *min = arr[i];
        else if(arr[i] > *max)
            *max = arr[i];
    }
}

