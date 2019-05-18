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
    
}
