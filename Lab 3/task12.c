#include <stdio.h>
int main() {
    int number, reversed_number = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);
    reversed_number = (number % 10) * 100;
    reversed_number += ((number / 10) % 10) * 10;
    reversed_number += number / 100;
    printf("Number: %d\n", number);
    printf("Output: %d\n", reversed_number);
    return 0;
}
