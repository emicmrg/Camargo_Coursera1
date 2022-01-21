/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char medianM=0, meanM=0, maximumM=0, minimumM=0;
  /* Statistics and Printing Functions Go Here */
  medianM = find_median(test, SIZE);
  meanM = find_mean(test, SIZE);
  maximumM = find_maximum(test, SIZE);
  minimumM = find_minimum(test, SIZE);

  print_statistics(medianM, meanM, maximumM, minimumM);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char median, unsigned char mean, unsigned char maximum, unsigned char minimum){
  printf("Median = %d\n", median);
  printf("Mean = %d\n", mean);
  printf("Minimum = %d\n", maximum);
  printf("Maximum = %d\n", minimum);
}

void print_array(){
}

int find_median(char *arrayData, int arrayLength){
	return 0;
}

int find_mean(unsigned char *arrayData, int arrayLength){
  unsigned char mean=0;
  int i=0, suma=0;
  for(i; i<arrayLength; i++){
    suma += arrayData[i];
  }
  mean = suma/arrayLength;
	return mean;
}

int find_maximum(char *arrayData, int arrayLength){
	return 0;
}

int find_minimum(char *arrayData, int arrayLength){
	return 0;
}

void sort_array(){

}
