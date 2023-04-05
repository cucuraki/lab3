#include <stdio.h>
#include "my_funs.h"

#define SIZE  11
int main() {
    int arr[SIZE] = {0,2,8,1,6,5,4,3,2,1,9};
    int arrSum = sum(arr, SIZE);
    printarray(arr, SIZE);
    printf("sum = %d \n", sum(arr, SIZE));
    sort(arr, SIZE);
    printf("median = %d\n", arr[(SIZE - 1) / 2]);
    float avr = (float )arrSum / SIZE;
    printf("%.2f", avr);
    return 0;
}
