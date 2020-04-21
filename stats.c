

/**
 * @file stats.c 
 * @brief This file is to be used to course 1 Week 1 Application Assignment.
 *
 * @author Rafael Mascarenhas Costa
 * @date April 20, 2020
 *
 */

#include <stdio.h>
#include <math.h>
#include "stats.h"

#define LEN 30
typedef enum {false,true} bool;


void main(){
    unsigned char numbers[LEN] = {123, 42, 113, 182, 42,
                                  2, 170, 180, 109, 196, 
                                  123, 17, 136, 49, 42, 
                                  83, 123, 45, 175, 93, 
                                  96, 172, 195, 185, 73, 
                                  73, 97, 149, 13, 43}
;
    
    print_statistics(numbers, LEN);

}

void print_statistics(unsigned char * array, unsigned int length){
    unsigned char minimum, maximum, mean, median;

    minimum = find_minimum(array,length);
    maximum = find_maximum(array,length);
    mean = find_mean(array,length);
    median = find_median(array, length);

    printf("\n\t=================== Statistics ===================\n");
    printf("\nGiven  ");
    print_array(array,length);
    sort_array(array,length);
    printf("\nSorted ");
    print_array(array,length);
    printf("\nMinimum: %d", minimum);
    printf("\nMaximum: %d", maximum);
    printf("\nMean: %d", mean);
    printf("\nMedian: %d\n\n", median);

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
        return round((*(array+length/2) + *(array+length/2-1))/2.0);
     
}

unsigned char find_mean(unsigned char * array, unsigned int length){
    float mean = 0;
    char i = 0;
    
    for(i = 0; i<length; i++){
        mean += *array;
        array++;
    }
    
    mean /= length;

    return round(mean);

}

unsigned char find_maximum(unsigned char * array, unsigned int length){
    
    int max = *array;

    do{
        max = (*array > max) ? *array : max;
        array++;
        length--;
    }while(length>0);

    return max;
}

unsigned char find_minimum(unsigned char * array, unsigned int length){

    int min = *array;

    do{
        min = (*array < min) ? *array : min;
        array++;
        length--;
    }while(length>0);

    return min;
}

void sort_array(unsigned char * array, unsigned int length) {
    
    char aux;
    bool isSorted = false;
    int i = 0;

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