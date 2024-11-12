
#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Output the result
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
