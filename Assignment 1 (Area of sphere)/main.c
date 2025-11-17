#include <stdio.h>
#include <math.h>

// Function to calculate surface area
double calculateSurfaceArea(double radius) {
    return 4 * M_PI * radius * radius;
}

int main() {
    double radius, surfaceArea;

    printf("Enter the radius of the sphere: ");
    if (scanf("%lf", &radius) != 1 || radius < 0) {
        printf("Invalid input. Radius must be a non-negative number.\n");
        return 1;
    }

    surfaceArea = calculateSurfaceArea(radius);
    printf("Surface Area of the sphere = %.4lf square units\n", surfaceArea);

    return 0;
}
