#include <stdio.h>

int main() {
    int n, i, marks;
    float totalGP = 0, cgpa;

    printf("Enter number of subjects: ");
    scanf("%d", &n);



    cgpa = totalGP / n;

    printf("\nYour CGPA is: %.2f\n", cgpa);

    return 0;
}