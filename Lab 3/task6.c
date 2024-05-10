#include <stdio.h>
int main() {
    int marks_subject1 = 78;
    int marks_subject2 = 45;
    int marks_subject3 = 62;
    int total_marks;
    float percentage;
    total_marks = marks_subject1 + marks_subject2 + marks_subject3;
    percentage = (float)total_marks / 300 * 100;
    printf("Robert's total marks: %d\n", total_marks);
    printf("Robert's percentage marks: %.2f%%\n", percentage);
    return 0;
}
