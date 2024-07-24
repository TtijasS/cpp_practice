#ifndef CUSTOM_STRUCTS_H
#define CUSTOM_STRUCTS_H

#include <stdlib.h>
#include <stdio.h>

typedef struct indexed_generic_pointer_type
{
	size_t indx;
	const void *ptr;
} indexed_generic_pointer_type;

typedef struct indexed_int_pointer_type
{
	size_t indx;
	int *ptr;
} indexed_int_pointer_type;

typedef struct indexed_float_pointer_type
{
	size_t indx;
	int *ptr;
} indexed_float_pointer_type;

typedef struct indexed_float_type
{
	size_t indx;
	float val;
} indexed_float_type;

typedef struct indexed_int_type
{
	size_t indx;
	int val;
} indexed_int_type;

#endif // CUSTOM_STRUCTS_H