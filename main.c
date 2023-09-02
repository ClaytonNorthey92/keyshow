#include <stdio.h>

int main(void) {
    printf("enter char: ");
    char c;
    while (1) {
        c = getc(stdin);
        printf("0x%X == %d", c, c);
        if (c == 0xA) {
            printf(" (enter key)\n");
            break;
        } else {
            printf("\n");
        }
    };
    return 0;
}