#include <stdio.h>
int main() {
    float height, width, depth, volume;
    printf("Enter height, width and depth: ");
    scanf("%f %f %f", &height, &width, &depth);
    volume = height * width * depth;
    printf("Volume of Cube = %.2f\n", volume);
    return 0;
}
