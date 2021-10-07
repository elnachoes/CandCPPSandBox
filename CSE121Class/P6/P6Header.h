#pragma once
#include <stdio.h>

//defining true and false
#define false 0
#define true 1

//defining the buffer size for the strings
#define BufferSize 1001

//prototypes for the 4 string maniplulating functions
void makeCopyString(char* str, char* strCopy);
void keepChars(char* str);
void convertUpperToLower(char* str);
_Bool isPalindrome(char* str);