#include <stdio.h>
int main() {
    char name[50];
    int roll;
    float m1, m2, m3, m4, total, percentage;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter roll: ");
    scanf("%d", &roll);
    printf("Enter marks in 4 subjects: ");
    scanf("%f %f %f %f", &m1, &m2, &m3, &m4);

    total = m1 + m2 + m3 + m4;
    percentage = (total / 400) * 100;

    printf("Name: %s\nRoll: %d\nPercentage: %.2f%%\n", name, roll, percentage);
    return 0;
}
