#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>


int _printf(const char *format, ...);
int _writechar(char c);
int _strputss(char *str);
int write_num(int num);
int write_binary(unsigned int num);

#endif
