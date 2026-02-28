#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct {
  size_t count;
  size_t capacity;
} Header;

int* array_init(size_t init_capacity) {
  Header* header = malloc(sizeof(int) * init_capacity + sizeof(Header));
  header->count = 0;
  header->capacity = init_capacity;
  return (int*)(header + 1); // move header pointer to numbers 
}

void array_push(int* arr, int val) {
  Header* header = (Header*)arr - 1;

  assert (header->count < header->capacity);
  arr[header->count++] = val;
}

size_t array_len(int* arr) {
  Header* header = (Header*)arr - 1;
  return header->count;
}

int main() {
  int* numbers = array_init(256); 
  
  array_push(numbers, 11);
  array_push(numbers, 12);
  array_push(numbers, 13);

  for(int i=0; i < array_len(numbers); i++) {
    printf("%i -> %i \n", i, numbers[i]);
  }

  return 0;
}
