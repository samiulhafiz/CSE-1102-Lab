#include <stdio.h>

int main() {
    float percentage;
    printf("Enter the percentage of marks: ");
    scanf("%f", &percentage);

    if (percentage >= 80) {
        printf("Description: Excellent\n");
        printf("Letter grade: A+\nGrade point: 4.0\n");
    } else if (percentage >= 75) {
        printf("Description: Very Good\n");
        printf("Letter grade: A\nGrade point: 3.75\n");
    } else if (percentage >= 70) {
        printf("Description: Good plus\n");
        printf("Letter grade: A-\nGrade point: 3.5\n");
    } else if (percentage >= 65) {
        printf("Description: Good\n");
        printf("Letter grade: B+\nGrade point: 3.25\n");
    } else if (percentage >= 60) {
        printf("Description: Good minus\n");
        printf("Letter grade: B\nGrade point: 3.0\n");
    } else if (percentage >= 55) {
        printf("Description: Quite satisfactory\n");
        printf("Letter grade: B-\nGrade point: 2.75\n");
    } else if (percentage >= 50) {
        printf("Description: Satisfactory\n");
        printf("Letter grade: C+\nGrade point: 2.5\n");
    } else if (percentage >= 45) {
        printf("Description: Barely satisfactory\n");
        printf("Letter grade: C\nGrade point: 2.25\n");
    } else if (percentage >= 40) {
        printf("Description: Barely adequate / Weak\n");
        printf("Letter grade: D\nGrade point: 2.0\n");
    } else {
        printf("Description: Fail\n");
        printf("Letter grade: F\nGrade point: 0.0\n");
    }

    return 0;
}
