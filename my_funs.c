//
// Created by manjaro on 3/31/23.
//

#include "my_funs.h"
#include "stdio.h"

#ifndef MY_FUNS_H
#define MY_FUNS_H

int sum(const int array[], int asize) {
    int sum = 0;
    for (int i = 0; i < asize; i++) {
        sum += array[i];
    }
    return sum;
}

int swap(int *pA, int *pB) {
    int ret = *pA > *pB;
    *pA += ((*pB) * ret);
    *pB -= ((*pA) * ret);
    *pB -= (*pB * 2 * ret);
    *pA -= ((*pB) * ret);
    return ret;
}

int sort_1pass(int array[], int asize) {
    int ret = 0;
    for(int i = 1; i < asize; i++){
        ret = (swap(array + i - 1, array + i) || ret);
    }

    return ret;
}
void sort(int array[], int asize){
    int isSorted = 0;
    if(!asize) return;
    int i = asize;
    while(1){
        isSorted = !sort_1pass(array, i);
        if( i == 1 || isSorted) return;
        i--;
        printarray(array, asize);
    }
}

void printarray(int array[], int asize){
    printf("[");
    for(int i = 0; i < asize - 1; i++){
        printf("%d, ", array[i]);
    }
    if(asize)
        printf("%d", array[asize - 1]);
    printf("]\n");
}
#endif