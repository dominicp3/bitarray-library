#ifndef BITARRAY_H
#define BITARRAY_H

#include <stdlib.h>
#include <stdint.h>

typedef struct bitarray_t bitarray_t;

bitarray_t *ba_init(int64_t initial_size);
int ba_set_bit(bitarray_t *b, int64_t index);
int ba_set_all(bitarray_t *b);
int ba_clear_bit(bitarray_t *b, int64_t index);
int ba_clear_all(bitarray_t *b);
int ba_flip_bit(bitarray_t *b, int64_t index);
char ba_get_bit(bitarray_t *b, int64_t index);
int64_t ba_size(bitarray_t *b);
void ba_destroy(bitarray_t *b);

#endif /* BITARRAY_H */