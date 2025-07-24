#include <stdio.h>

int main() {
    double Ax, Ay; // Coordinates of point A
    double Bx, By; // Coordinates of point B
    double Cx, Cy; // Coordinates of point C

    // Read coordinates of A
    printf("Enter coordinates of point A (x y): ");
    scanf("%lf %lf", &Ax, &Ay);

    // Read coordinates of B
    printf("Enter coordinates of point B (x y): ");
    scanf("%lf %lf", &Bx, &By);

    // Read coordinates of C
    printf("Enter coordinates of point C (x y): ");
    scanf("%lf %lf", &Cx, &Cy);

    // Calculate cross product to check if points are collinear
    double cross = (Cy - Ay) * (Bx - Ax) - (Cx - Ax) * (By - Ay);

    // If cross != 0, points are not collinear → C not on line AB
    if (cross != 0) {
        printf("Point C is NOT on the segment AB.\n");
        return 0;
    }

    // Check if C lies within the bounding box defined by A and B on x-axis
    if (Cx < Ax && Cx < Bx) {
        printf("Point C is NOT on the segment AB.\n");
        return 0;
    }
    if (Cx > Ax && Cx > Bx) {
        printf("Point C is NOT on the segment AB.\n");
        return 0;
    }

    // Check if C lies within the bounding box defined by A and B on y-axis
    if (Cy < Ay && Cy < By) {
        printf("Point C is NOT on the segment AB.\n");
        return 0;
    }
    if (Cy > Ay && Cy > By) {
        printf("Point C is NOT on the segment AB.\n");
        return 0;
    }

    // If all checks passed, C is on the segment
    printf("Point C is on the segment AB.\n");

    return 0;
}
