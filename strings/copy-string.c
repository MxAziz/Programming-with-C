// Program to copy a string from one variable to another

#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);
    return 0;
}
