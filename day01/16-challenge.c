#include <stdio.h>

int main() {
    int hour, minute;
    printf("Enter time (HH:MM): ");
    if (scanf("%d:%d", &hour, &minute) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    // Convert 24h to 12h format
    if (hour == 0)
        hour = 12;
    else if (hour > 12)
        hour = hour - 12;

    // Helper to print number in words (inline)
    // We'll print directly using many if-else statements

    // Special cases first
    if (minute == 0) {
        // Print hour
        if (hour == 1) printf("one");
        else if (hour == 2) printf("two");
        else if (hour == 3) printf("three");
        else if (hour == 4) printf("four");
        else if (hour == 5) printf("five");
        else if (hour == 6) printf("six");
        else if (hour == 7) printf("seven");
        else if (hour == 8) printf("eight");
        else if (hour == 9) printf("nine");
        else if (hour == 10) printf("ten");
        else if (hour == 11) printf("eleven");
        else if (hour == 12) printf("twelve");

        printf(" o'clock\n");
    }
    else if (minute == 15) {
        printf("quarter past ");
        // print hour
        if (hour == 1) printf("one\n");
        else if (hour == 2) printf("two\n");
        else if (hour == 3) printf("three\n");
        else if (hour == 4) printf("four\n");
        else if (hour == 5) printf("five\n");
        else if (hour == 6) printf("six\n");
        else if (hour == 7) printf("seven\n");
        else if (hour == 8) printf("eight\n");
        else if (hour == 9) printf("nine\n");
        else if (hour == 10) printf("ten\n");
        else if (hour == 11) printf("eleven\n");
        else if (hour == 12) printf("twelve\n");
    }
    else if (minute == 30) {
        printf("half past ");
        if (hour == 1) printf("one\n");
        else if (hour == 2) printf("two\n");
        else if (hour == 3) printf("three\n");
        else if (hour == 4) printf("four\n");
        else if (hour == 5) printf("five\n");
        else if (hour == 6) printf("six\n");
        else if (hour == 7) printf("seven\n");
        else if (hour == 8) printf("eight\n");
        else if (hour == 9) printf("nine\n");
        else if (hour == 10) printf("ten\n");
        else if (hour == 11) printf("eleven\n");
        else if (hour == 12) printf("twelve\n");
    }
    else if (minute == 45) {
        int next_hour = (hour == 12) ? 1 : hour + 1;
        printf("quarter to ");
        if (next_hour == 1) printf("one\n");
        else if (next_hour == 2) printf("two\n");
        else if (next_hour == 3) printf("three\n");
        else if (next_hour == 4) printf("four\n");
        else if (next_hour == 5) printf("five\n");
        else if (next_hour == 6) printf("six\n");
        else if (next_hour == 7) printf("seven\n");
        else if (next_hour == 8) printf("eight\n");
        else if (next_hour == 9) printf("nine\n");
        else if (next_hour == 10) printf("ten\n");
        else if (next_hour == 11) printf("eleven\n");
        else if (next_hour == 12) printf("twelve\n");
    }
    else if (minute < 30) {
        // Print minute in words first
        if (minute == 1) printf("one");
        else if (minute == 2) printf("two");
        else if (minute == 3) printf("three");
        else if (minute == 4) printf("four");
        else if (minute == 5) printf("five");
        else if (minute == 6) printf("six");
        else if (minute == 7) printf("seven");
        else if (minute == 8) printf("eight");
        else if (minute == 9) printf("nine");
        else if (minute == 10) printf("ten");
        else if (minute == 11) printf("eleven");
        else if (minute == 12) printf("twelve");
        else if (minute == 13) printf("thirteen");
        else if (minute == 14) printf("fourteen");
        else if (minute == 15) printf("fifteen");
        else if (minute == 16) printf("sixteen");
        else if (minute == 17) printf("seventeen");
        else if (minute == 18) printf("eighteen");
        else if (minute == 19) printf("nineteen");
        else if (minute == 20) printf("twenty");
        else if (minute == 21) { printf("twenty one"); }
        else if (minute == 22) { printf("twenty two"); }
        else if (minute == 23) { printf("twenty three"); }
        else if (minute == 24) { printf("twenty four"); }
        else if (minute == 25) { printf("twenty five"); }
        else if (minute == 26) { printf("twenty six"); }
        else if (minute == 27) { printf("twenty seven"); }
        else if (minute == 28) { printf("twenty eight"); }
        else if (minute == 29) { printf("twenty nine"); }

        printf(" minute");
        if (minute != 1) printf("s");
        printf(" past ");

        // print hour
        if (hour == 1) printf("one\n");
        else if (hour == 2) printf("two\n");
        else if (hour == 3) printf("three\n");
        else if (hour == 4) printf("four\n");
        else if (hour == 5) printf("five\n");
        else if (hour == 6) printf("six\n");
        else if (hour == 7) printf("seven\n");
        else if (hour == 8) printf("eight\n");
        else if (hour == 9) printf("nine\n");
        else if (hour == 10) printf("ten\n");
        else if (hour == 11) printf("eleven\n");
        else if (hour == 12) printf("twelve\n");
    }
    else {
        int minutes_to = 60 - minute;
        int next_hour = (hour == 12) ? 1 : hour + 1;

        // print minutes_to in words
        if (minutes_to == 1) printf("one");
        else if (minutes_to == 2) printf("two");
        else if (minutes_to == 3) printf("three");
        else if (minutes_to == 4) printf("four");
        else if (minutes_to == 5) printf("five");
        else if (minutes_to == 6) printf("six");
        else if (minutes_to == 7) printf("seven");
        else if (minutes_to == 8) printf("eight");
        else if (minutes_to == 9) printf("nine");
        else if (minutes_to == 10) printf("ten");
        else if (minutes_to == 11) printf("eleven");
        else if (minutes_to == 12) printf("twelve");
        else if (minutes_to == 13) printf("thirteen");
        else if (minutes_to == 14) printf("fourteen");
        else if (minutes_to == 15) printf("fifteen");
        else if (minutes_to == 16) printf("sixteen");
        else if (minutes_to == 17) printf("seventeen");
        else if (minutes_to == 18) printf("eighteen");
        else if (minutes_to == 19) printf("nineteen");
        else if (minutes_to == 20) printf("twenty");
        else if (minutes_to == 21) { printf("twenty one"); }
        else if (minutes_to == 22) { printf("twenty two"); }
        else if (minutes_to == 23) { printf("twenty three"); }
        else if (minutes_to == 24) { printf("twenty four"); }
        else if (minutes_to == 25) { printf("twenty five"); }
        else if (minutes_to == 26) { printf("twenty six"); }
        else if (minutes_to == 27) { printf("twenty seven"); }
        else if (minutes_to == 28) { printf("twenty eight"); }
        else if (minutes_to == 29) { printf("twenty nine"); }

        printf(" minute");
        if (minutes_to != 1) printf("s");
        printf(" to ");

        // print next_hour
        if (next_hour == 1) printf("one\n");
        else if (next_hour == 2) printf("two\n");
        else if (next_hour == 3) printf("three\n");
        else if (next_hour == 4) printf("four\n");
        else if (next_hour == 5) printf("five\n");
        else if (next_hour == 6) printf("six\n");
        else if (next_hour == 7) printf("seven\n");
        else if (next_hour == 8) printf("eight\n");
        else if (next_hour == 9) printf("nine\n");
        else if (next_hour == 10) printf("ten\n");
        else if (next_hour == 11) printf("eleven\n");
        else if (next_hour == 12) printf("twelve\n");
    }

    return 0;
}
