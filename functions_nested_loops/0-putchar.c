#include <stdio.h>
#include "main.h"
int main(void) {
    int i;
    for (i = 0; message[i] != '\0'; i++) {
        putchar(message[i]);
    }

    putchar('\n');
    return 0;
}
