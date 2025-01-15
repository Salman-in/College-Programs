#include <stdio.h>

int main() {
    int number, first_digit, last_digit, sum;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find the last digit (using modulo operation)
    last_digit = number % 10;

    // Find the first digit (repeated division until first digit is found)
    first_digit = number;
    while (first_digit >= 10) {
        first_digit = first_digit / 10;
    }

    // Calculate the sum of the first and last digits
    sum = first_digit + last_digit;

    // Print the result
    printf("Sum of first and last digit of %d is: %d\n", number, sum);

    return 0;
}
