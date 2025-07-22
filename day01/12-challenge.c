#include <stdio.h>

int main() {
    int h1, m1, s1; // First time
    int h2, m2, s2; // Second time

    // Ask user for the two times
    printf("Enter first time (HH:MM:SS): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Enter second time (HH:MM:SS): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    // Compare hours
    if (h1 < h2) {
        printf("First comes before second\n");
    } else if (h1 > h2) {
        printf("Second comes before first\n");
    } else {
        // Hours are equal, compare minutes
        if (m1 < m2) {
            printf("First comes before second\n");
        } else if (m1 > m2) {
            printf("Second comes before first\n");
        } else {
            // Minutes are equal, compare seconds
            if (s1 < s2) {
                printf("First comes before second\n");
            } else if (s1 > s2) {
                printf("Second comes before first\n");
            } else {
                // Everything is equal
                printf("Both times are equal\n");
            }
        }
    }

    return 0;
}
