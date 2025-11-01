#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char mot[] = "hello";
    char *p = mot;

    while (*p != '\0')
    {
            if (*p >= 'a' && *p <= 'z')
            *p = *p - 32;
            printf("%c\n",*p);
            p++;
    }
    return (0);
}
