#include "main.h"

/**
 * write_pointer - writes apointer memory address
 * @ptr: memory address to be written
 * Return: number of characters written
 */

int write_pointer(void *ptr)
{
	uintptr_t addr = (uintptr_t)ptr;

	return (write_hexadecimal(addr));
}
