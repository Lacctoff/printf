#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


int write_pointer(void *ptr);
int write_hexadecimal(uintptr_t value);
int _printf(const char *format, ...);
int _writechar(char c);
int _strputss(char *str);
int write_num(int num);
int write_binary(unsigned int num);
int write_unsigned(unsigned int num);
int write_octal(unsigned int num);
int _write_hexadecimal(unsigned int num, char case_type);

#endif
