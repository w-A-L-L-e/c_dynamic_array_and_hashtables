#define ARRAY_INIT_CAPACITY 256

typedef struct {
  size_t count;
  size_t capacity;
} Header;

#define array_push(arr, val)                    \
  do {                                          \
    if(arr == NULL) {                           \
      Header* header = malloc( sizeof(*arr) * ARRAY_INIT_CAPACITY + sizeof(Header)); \
      header->count = 0;                        \
      header->capacity = ARRAY_INIT_CAPACITY;   \
      arr = (void*)(header + 1);                \
    }                                           \
    Header* header = (Header*)(arr) - 1;        \
    if (header->count >= header->capacity) {    \
      header->capacity *= 2;                    \
      header = realloc(header, sizeof(*arr) * header->capacity + sizeof(Header)); \
      arr = (void*)(header + 1);                \
    }                                           \
    arr[header->count++] = (val);               \
  } while(0) // do while so we have a scoped block and ';' after macro still works

#define array_len(arr) ((Header*)(arr) - 1)->count

#define array_free(arr) free((Header*)(arr) -1)

