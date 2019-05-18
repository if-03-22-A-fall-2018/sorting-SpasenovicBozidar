/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <time.h> //libary for the time
#include "stopwatch.h"

static clock_t startingPoint;
static clock_t endingPoint;

void start_stopwatch (){
  startingPoint=clock(); //initialize the star time with the time in that moment
  endingPoint=0; //initialize the end time with a default value
}

void stop_stopwatch (){
  endingPoint=clock();//initialize the time to a temp variable before stopping the time
}

float elapsed_time (){
  if(endingPoint==0)
  {
    stop_stopwatch();
  }
  return (float)(endingPoint-startingPoint)/CLOCKS_PER_SEC; //cast to float because the value of the quotient is a double
}
