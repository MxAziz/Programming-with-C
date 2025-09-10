#include <stdio.h>

int main() {
    int n, i, marks;
    float totalGP = 0, cgpa;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nEnter marks of subject %d: ", i);
        scanf("%d", &marks);


        if (marks >= 80 && marks <= 100) {
            printf("Grade: A+\n");
            totalGP += 4.0;
        }
        else if (marks >= 70) {
            printf("Grade: A\n");
            totalGP += 3.5;
        }
        else if (marks >= 60) {
            printf("Grade: A-\n");
            totalGP += 3.0;
        }
        else if (marks >= 50) {
            printf("Grade: B\n");
            totalGP += 2.5;
        }
        else if (marks >= 40) {
            printf("Grade: C\n");
            totalGP += 2.0;
        }
        else if (marks >= 33) {
            printf("Grade: D\n");
            totalGP += 1.0;
        }
        else {
            printf("Grade: F\n");
            totalGP += 0.0;
        }
    }

    cgpa = totalGP / n;

    printf("\nYour CGPA is: %.2f\n", cgpa);

    return 0;
}