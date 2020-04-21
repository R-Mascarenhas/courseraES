

/**
 * @file stats.h 
 * @brief This file is to be used to course 1 Week 1 Application Assignment.
 *
 * @author Rafael Mascarenhas Costa
 * @date April 20, 2020
 *
 */


#ifndef __STATS_H__
#define __STATS_H__

#include <stdint.h>

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * 
 * This function will print sthe statistics of an array including minimum, maximum, mean, and median in
 * a nicely formatted way with an indicator of the variable for each statistic value printed
 * 
 * @param array
 *
 * @return void
 */
void print_statistics(unsigned char * array, unsigned int lenght);


/**
 * @brief Prints the array to the screen
 * 
 * Prints the given array formatted like: [1,2,3,...]
 *
 * @param array
 * @return void
 */
void print_array(unsigned char * array, unsigned int length);


/**
 * @brief function to find the median
 * 
 * This function returns the round median of an array
 * 
 * @param array
 *
 * @return char
 */
unsigned char find_median(unsigned char * array, unsigned int length);


/**
 * @brief function to find the mean
 * 
 * This function returns the nearest integer rounded down
 * 
 * @param array
 *
 * @return char
 */
unsigned char find_mean(unsigned char * array, unsigned int length);


/**
 * @brief function to find the maximum value
 * 
 * This function returns the maximum value of array
 *
 * @param array
 * 
 * @return char
 */
unsigned char find_maximum(unsigned char * array, unsigned int length);


/**
 * @brief function to find the minimum value
 * 
 * This function returns the minimum value of array
 *
 * @param array
 * 
 * @return char
 */
unsigned char find_minimum(unsigned char * array, unsigned int length);


/**
 * @brief function to sorted array in reverse way
 * 
 * This function sorts the array from largest to smallest.
 *
 * @return void
 */
void sort_array(unsigned char * array, unsigned int length);


#endif /*__STATS_H__ */