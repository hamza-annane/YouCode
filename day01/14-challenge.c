#include <stdio.h>

int main() {
    int a, b, c;

    // Input the sides of the triangle
    printf("Enter three side lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check for triangle validity using the triangle inequality rule
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid\n");
    }
    else if (a == b && b == c) {
        printf("Equilateral\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }

    return 0;
}
