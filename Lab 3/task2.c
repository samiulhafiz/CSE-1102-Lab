#include <stdio.h>
int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    number += 8;
    number /= 3;
    number %= 5;
    number *= 5;
    printf("Final result: %d\n", number);
    return 0;
}
