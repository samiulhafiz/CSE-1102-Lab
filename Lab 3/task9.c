#include <stdio.h>
int main() {
    int number, first_digit, second_last_digit, sum;
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
    first_digit = number / 10000;
    second_last_digit = (number / 10) % 10;
    sum = first_digit + second_last_digit;
    printf("NUMBER: %d\n", number);
    printf("OUTPUT: %d+%d=%d\n", first_digit, second_last_digit, sum);
    return 0;
}
