#ifndef CUSTOM_FUNCTIONS_H
#define CUSTOM_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "custom_structs.h"

int compare_indexed_int_type_ascending(const void *, const void *);
int compare_indexed_int_type_descending(const void *, const void *);
int compare_indexed_floats_largest_first(const void *, const void *);
int compare_generic_indexed_pointers(const void *, const void *);
int compare_generic_indexed_pointers_largest_first(const void *, const void *);
int compare_generic_indexed_pointers_steps(const void *, const void *);
int compare_int(const void *, const void *);
int compare_pointers_to_ints(const void *, const void *);
void print_array(const void *, size_t);
int calculate_magnitudes(float *, float *, float *, uint32_t );
void print_indexed_array(indexed_float_type *indexed_array, size_t array_len);
void print_indexed_array(indexed_int_type *indexed_array, size_t array_len);

#endif // CUSTOM_FUNCTIONS_H