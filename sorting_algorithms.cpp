/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdlib.h>
#include "sorting_algorithms.h"

void 	init_random (int *array, unsigned long length){
  for (int i = 0; i < (int)length; i++) {
    array[i]= rand();
}
}

void 	bubble_sort (int *array, unsigned long length){
    int swap = 0;
    for (int i = 0; i < (int)length; i++) {
      for (int j = 0; j < (int)length; j++) {
          if (array[i] < array[j]) {
            swap = array[i];
            array[i] = array[j];
            array[j] = swap;
          }
      }
    }
}

void 	insertion_sort (int *array, unsigned long length){
    int i, key, j;
    for (i = 1; i < (int)length; i++)
    {
        key = array[i];
        j = i - 1;

        // Move elements of arr that are greater than key, to one position ahead of their current position
        while (j > -1 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}
