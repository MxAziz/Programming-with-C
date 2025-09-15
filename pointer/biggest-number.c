// write a C program to find the biggest number among three numbers using pointers.



#include <stdio.h>

int main() {
    int a, b, c;
    int *p1, *p2, *p3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Pointing the pointers to the addresses of the variables
    p1 = &a;
    p2 = &b;
    p3 = &c;

    // Comparing the values using pointers
    if (*p1 >= *p2 && *p1 >= *p3)
        printf("Biggest = %d\n", *p1);
    else if (*p2 >= *p1 && *p2 >= *p3)
        printf("Biggest = %d\n", *p2);
    else
        printf("Biggest = %d\n", *p3);

    return 0;
}