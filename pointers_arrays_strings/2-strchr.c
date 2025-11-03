#include "main.h"
#include <stdio.h>
/**
* *_strchr - Function that locates a character in a string.
* @s: explains in "betty" that we are working on the pointer s.
* @b: explains in "betty" that we are working on the pointer b.
* @n: explains in "betty" that we are working on the pointer n.
* Return: no return.
*/
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return s;
        s++;
    }
    if (c == '\0')
        return (s);
    return (NULL);
}
