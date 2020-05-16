

/**
 * @file stats.c 
 * @brief This file is to be used to course 1 Week 1 Application Assignment.
 *
 * @author Rafael Mascarenhas Costa
 * @date April 20, 2020
 *
 */

#include <stdio.h>
#include "stats.h"

#define LEN 40
typedef enum {false,true} bool;


void main(){
    unsigned char numbers[LEN] = { 34, 201,  190, 154,   8, 194,   2,   6,
                                   114,  88,  45,  76, 123,  87,  25,  23,
                                   200, 122, 150,  90,  92,  87, 177, 244,
                                   201,   6,  12,  60,   8,   2,   5,  67,
                                     7,  87, 250, 230,  99,   3, 100,  90};
    
    print_statistics(numbers, LEN);

}

void print_statistics(unsigned char * array, unsigned int length){

    printf("\n\t=================== Statistics ===================\n");
    printf("\nGiven  ");
    print_array(array,length);
    sort_array(array,length);
    printf("\nSorted ");
    print_array(array,length);
    printf("\nMinimum: %d", find_minimum(array,length));
    printf("\nMaximum: %d", find_maximum(array,length));
    printf("\nMean: %d", find_mean(array,length));
    printf("\nMedian: %d\n\n", find_median(array, length));

}

void print_array(unsigned char * array, unsigned int length){

    printf("Array: [");
    while(length > 0) {
        printf("%d, ", *array);
        array++;
        length--;
    }
    printf("\b\b]");
}

unsigned char find_median(unsigned char * array, unsigned int length){

    if(length%2)
        return (*(array+length/2));
    else 
        return ((*(array+length/2) + *(array+length/2-1))/2);
}

unsigned char find_mean(unsigned char * array, unsigned int length){
    int mean = 0;
    unsigned char i = 0;
    
    for(i = 0; i<length; i++){
        mean += *array;
        array++;
    }
    
    mean /= length;

    return (unsigned char) mean;

}

unsigned char find_maximum(unsigned char * array, unsigned int length){
    
    unsigned char max = *array;

    do{
        max = (*array > max) ? *array : max;
        array++;
        length--;
    }while(length>0);

    return max;
}

unsigned char find_minimum(unsigned char * array, unsigned int length){

    unsigned char min = *array;

    do{
        min = (*array < min) ? *array : min;
        array++;
        length--;
    }while(length>0);

    return min;
}

void sort_array(unsigned char * array, unsigned int length) {
    
    unsigned char aux, i;
    bool isSorted = false;

    while (!isSorted){
       for(i=0;i<length-1;i++){
            if(*array < *(array+1)){
                aux = *array;
                *array = *(array+1);
                *(array+1) = aux;
                isSorted = true;   
            }
            array++;
        }

        array -= length-1;
        isSorted = !isSorted;
    }
}