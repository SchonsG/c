#include <stdio.h>

int main(void) {
    unsigned char c;

    printf("Size of C (char): %zu bytes\n", sizeof c);
    
    c = 255;
    printf("The value of c: %i\n", c);

    return 0;
}

