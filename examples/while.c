#include <stdio.h>

int main(void)
{
    int counter = 0;

    printf("Set a number to loop: ");
    scanf("%d", &counter);

    while (counter > 0) {
        printf("%d\n", counter);
        --counter;
    }

    return 0;
}

