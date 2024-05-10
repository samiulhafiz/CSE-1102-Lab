#include <stdio.h>
int main() {
    int number, modified_number = 0, multiplier = 1;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    while (number > 0) {
        int digit = number % 10;
        digit = (digit + 2) % 10;
        modified_number += digit * multiplier;
        multiplier *= 10;
        number /= 10;
    }
    printf("Modified number: %d\n", modified_number);
    return 0;
}
