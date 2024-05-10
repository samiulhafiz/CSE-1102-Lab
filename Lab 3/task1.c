#include <stdio.h>
int main() {
    int number, result;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    result = ((number + 8) / 3) % 5 * 5;
    printf("Final result: %d\n", result);
    return 0;
}
