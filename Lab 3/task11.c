#include <stdio.h>
int main() {
    int number, sum = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);
    int temp = number;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Number: %d\n", number);
    printf("Output: %d\n", sum);
    return 0;
}
