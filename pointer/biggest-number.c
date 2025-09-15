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


    return 0;
}