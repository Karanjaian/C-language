//Grading system

#include <stdio.h>

int main() {
    int sub1, sub2, sub3;
    float average;

    // Input scores
    printf("Enter marks for Subject 1: ");
    scanf("%d", &sub1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &sub2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &sub3);

    // Calculate the average
    average = (sub1 + sub2 + sub3) / 3.0;

    // Print the average
    printf("Average: %.2f\n", average);

    // Determine and print the grade based on the average
    if (average >= 90) {
        printf("Grade: A\n");
    }
    else if (average >= 80) {
        printf("Grade: B\n");
    }
    else if (average >= 70) {
        printf("Grade: C\n");
    }
    else if (average >= 60) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}
