#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 3 == 0 || number % 7 == 0) {
        printf("%d is divisible by either 3 or 7.\n", number);
    } else {
        printf("%d is not divisible by either 3 or 7.\n", number);
    }
    return 0;
}
