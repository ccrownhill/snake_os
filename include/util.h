#ifndef UTIL_H
#define UTIL_H

#include <types.h>

void int_to_ascii(int num, char s[]);
void reverse(char s[]);
int strlen(char s[]);
void memset(u8* dest, u8 val, u32 len);

#endif