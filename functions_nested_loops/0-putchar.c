#include <stdio.h>
#include "main.h"
int main(void) {

    for (int i = 0; message[i] != '\0'; i++) {
        putchar(message[i]);
    }

    putchar('\n');
    return 0;
}
