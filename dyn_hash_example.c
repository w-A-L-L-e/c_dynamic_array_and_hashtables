#include <stdio.h>

#define STB_DS_IMPLEMENTATION
#include "stb_ds.h"


typedef struct {
  char *key;
  int value;
} Item;

Item *table = NULL;

int main(){

  shput(table, "hello", 23);
  shput(table, "world", 44);
  shput(table, "foo", 555);
  
  table[shgeti(table,"world")].value = 12344556;

  for(int i=0; i < shlen(table); i++) {
    printf("%s => %i\n", table[i].key, table[i].value);
  }
    
  return 0;
}
