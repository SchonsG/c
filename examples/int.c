#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void){
    uint16_t i = INT_MAX;

    printf("O tamanho de i (integer) eh: %lu bytes\n", sizeof i);
    printf("O tamanho de i (integer) eh: %u\n", i); 

    return 0;
}
