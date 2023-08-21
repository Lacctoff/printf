#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int _writechar(char c);
int _strputss(char *str);
int _numput(int num);

int _itoa(int num, char *buffer);
void _reverse(char *str, int length);
void _write(char *str, int length);
#endif
