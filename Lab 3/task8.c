#include <stdio.h>
int main() {
    int total_students = 45;
    int boys_total = 25;
    int boys_gradeA = 17;
    int gradeA_total, girls_gradeA;
    gradeA_total = 0.8 * total_students;
    girls_gradeA = gradeA_total - boys_gradeA;
    printf("Total number of girls getting grade 'A': %d\n", girls_gradeA);
    return 0;
}
