#include "custom_functions.h"

int compare_indexed_int_type_ascending(const void *a, const void *b)
{
	int va = ((const indexed_int_type *)a)->val;
	int vb = ((const indexed_int_type *)b)->val;

	return (va > vb) - (va < vb);
}

int compare_indexed_int_type_descending(const void *a, const void *b)
{
	int va = ((const indexed_int_type *)a)->val;
	int vb = ((const indexed_int_type *)b)->val;

	return (va < vb) - (va > vb);
}

int compare_indexed_floats_largest_first(const void *a, const void *b)
{
	float va = (const float)(((const indexed_float_type *)a)->val);
	float vb = (const float)(((const indexed_float_type *)b)->val);

	return (va < vb) - (va > vb);
}

int compare_generic_indexed_pointers(const void *a, const void *b)
{
	// Cast to the custom struct and then to int pointers, followed by dereferencing
	int va = *((const int *)(((const indexed_generic_pointer_type *)a)->ptr));
	int vb = *((const int *)(((const indexed_generic_pointer_type *)b)->ptr));

	// Return the comparison result
	return (va > vb) - (va < vb);
}

int compare_generic_indexed_pointers_largest_first(const void *a, const void *b)
{
	// Cast to the custom struct and then to int pointers, followed by dereferencing
	int va = *((const int *)(((const indexed_generic_pointer_type *)a)->ptr));
	int vb = *((const int *)(((const indexed_generic_pointer_type *)b)->ptr));

	// Return the comparison result
	return (va < vb) - (va > vb);
}

int compare_generic_indexed_pointers_steps(const void *a, const void *b)
{
	// First cast to generic pointer structs
	const indexed_generic_pointer_type *a_struct = (const indexed_generic_pointer_type *)a;
	const indexed_generic_pointer_type *b_struct = (const indexed_generic_pointer_type *)b;

	// Cast to const float pointer that are found inside the struct
	const float *a_ptr = (const float *)a_struct->ptr;
	const float *b_ptr = (const float *)b_struct->ptr;

	// Deref the pointers
	float a_val = *a_ptr;
	float b_val = *b_ptr;

	return (a_val > b_val) - (a_val < b_val);
}

int compare_int(const void *a, const void *b)
{
	int va = *(const int *)a;
	int vb = *(const int *)b;
	return (va > vb) - (va < vb);
}

int compare_pointers_to_ints(const void *a, const void *b)
{
	int va = **(const int **)a;
	int vb = **(const int **)b;

	return (va > vb) - (va < vb);
}

/**
 * @brief Only takes indexed_array_type struct types of array
 *
 * @param base_array indexed_array_type struct
 * @param array_len length of array
 */
void print_array(const void *base_array, size_t array_len)
{
	// cast to indexed_int_type struct
	const indexed_int_type *array_of_structs = (const indexed_int_type *)base_array;
	for (size_t i = 0; i < array_len; i++)
	{
		printf("%d : %d\n", array_of_structs[i].indx, array_of_structs[i].val);
	}
}