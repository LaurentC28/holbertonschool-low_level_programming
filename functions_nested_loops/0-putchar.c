#include <stdio.h>
int main(void) {
    char message[] = "_putchar";
    for (int i = 0; message[i] != '\0'; i++) {
        putchar(message[i]);
    }

    putchar('\n');
    return 0;
}
