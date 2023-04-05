//
// Created by manjaro on 3/31/23.
//

#ifndef LAB3_MY_FUNS_H
#define LAB3_MY_FUNS_H
int sum(const int array[], int asize);  /* returns the sum of the elements of a one dimensional array.*/
int swap( int *pA, int *pB );  /* returns a 1 if the integer stored at *pA is greater then the integer stored at *pB and swaps the two integers. returns 0 otherwise.*/
int sort_1pass(int array[], int asize );  /* makes one pass through the array, swapping pairs of values that are not in ascending order, using the swap() function above. Returns a 1 if any values were swapped and returns 0 otherwise.*/
void sort(int array[], int asize);  /* sorts the values in array in ascending order using sort_1pass() */
void printarray(int array[], int asize);  /* prints the contents of the array on one line*/

#endif //LAB3_MY_FUNS_H
