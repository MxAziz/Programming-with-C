// A simple C program to find maximum and minimum between two numbers using functions


#include <stdio.h>
int max(int a, int b) {
   return (a>b) ? a : b;    // ternary operator
 }
int min(int a, int b) {
  return (a<b)?a:b;
 }

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Max = %d\n", max(x,y));
    printf("Min = %d\n", min(x,y));
    return 0;
}
