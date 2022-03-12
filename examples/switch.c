#include <stdio.h>

int main(void)
{
    int grade;
    int aCount = 0;
    int bCount = 0;

    printf("Enter the letter grades.\n");
    printf("Enter the EOF character to end input.\n");

    while ((grade = getchar()) != EOF){
        switch (grade) {
           case 'A':
           case 'a':
                ++aCount;
                break;

           case 'B':
           case 'b':
                ++bCount;
                break;

           default:
                break;
        }
    }
    
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);

    return 0;
}
