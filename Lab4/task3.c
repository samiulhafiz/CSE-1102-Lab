#include <stdio.h>

int main()
{
    int n, i, number;
    float sum = 0, average;
    printf("Enter the number of inputs: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number);
        sum += number;
    }
    average = sum / n;
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}
