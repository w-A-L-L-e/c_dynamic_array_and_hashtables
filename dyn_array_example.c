#include <stdio.h>
#include <stdlib.h>
#include "dyn_array.h"

int main() {
  int* numbers = NULL; 
  
  array_push(numbers, 11);
  array_push(numbers, 12);
  array_push(numbers, 13);

  for(int i=0; i < array_len(numbers); i++) {
    printf("%i -> %i \n", i, numbers[i]);
  }
  array_free(numbers);  // free memory allocated


  float* fnumbers = NULL; 
  
  array_push(fnumbers, 11);
  array_push(fnumbers, 12);
  array_push(fnumbers, 13);

  for(int i=0; i < array_len(fnumbers); i++) {
    printf("%i -> %f \n", i, fnumbers[i]);
  }


  array_free(fnumbers);

  return 0;
}
