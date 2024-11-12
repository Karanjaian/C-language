#include <stdio.h>

int main() {
    int number, i = 1;
    
    
    printf("Enter the number of terms: ");
    scanf("%d", &number);
    
    printf("Number\tCube\n");

    // Do-while loop to calculate cube of numbers
    do {
        printf("%d\t%d\n", i, i * i * i);
        i++;
    } while (i <= number);

    return 0;
}

