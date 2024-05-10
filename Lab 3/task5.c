#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the value of variable 'a': ");
    scanf("%d", &a);
    printf("Enter the value of variable 'b': ");
    scanf("%d", &b);
    if (a < 50 || a < b) {
        printf("At least one of the conditions 'a < 50' or 'a < b' is true.\n");
    } else {
        printf("Both conditions 'a < 50' and 'a < b' are false.\n");
    }
    return 0;
}
