#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time span in years: ");
    scanf("%f", &time);
    rate = rate / 100;
    compound_interest = principal * (pow(1 + rate, time) - 1);
    printf("Compound interest: %.2f\n", compound_interest);

    return 0;
}
