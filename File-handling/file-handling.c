#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2, *f3;
    int number;

    printf("Contents of DATA file\n\n");

    // Create DATA file
    f1 = fopen("DATA", "w");
    if (f1 == NULL) {
        printf("Error opening DATA file\n");
        return 1;
    }

    // Input numbers into DATA file
    while (1) {
        scanf("%d", &number);
        if (number == -1)  // stop if user enters -1
            break;
        putw(number, f1);
    }
    fclose(f1);

    // Open files for processing
    f1 = fopen("DATA", "r");
    f2 = fopen("ODD", "w");
    f3 = fopen("EVEN", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Error opening files\n");
        return 1;
    }

    // Separate odd and even numbers
    while ((number = getw(f1)) != EOF) {
        if (number % 2 == 0)
            putw(number, f3);  // even
        else
            putw(number, f2);  // odd
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    // Display ODD file
    f2 = fopen("ODD", "r");
    printf("\n\nContents of ODD file\n\n");
    while ((number = getw(f2)) != EOF)
        printf("%4d", number);
    fclose(f2);

    // Display EVEN file
    f3 = fopen("EVEN", "r");
    printf("\n\nContents of EVEN file\n\n");
    while ((number = getw(f3)) != EOF)
        printf("%4d", number);
    fclose(f3);

    return 0;
}