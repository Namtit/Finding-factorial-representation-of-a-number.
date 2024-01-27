#include <stdio.h>

/**
 * Calculates the smallest integer 'n' such that 'n!' (n factorial) equals the given number 'a'.
 * If no such 'n' exists, returns 0.
 *
 * @param a The number for which the factorial representation is to be found.
 * @return The smallest integer 'n' such that 'n!' equals 'a', or 0 if no such 'n' exists.
 */
int fact(int a) {
    int fact = 1, c = 1, res = 0;

    // Iterate to find the factorial representation
    while(fact <= a) {
        if (fact == a) {
            res = c - 1;
            break;
        }
        fact = fact * c;
        c++;
    }
    return res;
}

/**
 * Main function of the program.
 * It prompts the user for a number, finds its factorial representation if possible,
 * and displays the result.
 */
int main() {
    int a, x;

    // Ask the user to input a number
    printf("Enter any number to obtain factorial representation:\n");
    scanf("%d", &a);

    // Find the factorial representation
    x = fact(a);

    // Display the result
    if (x != 0) {
        printf("%d in factorial representation: %d!\n", a, x);
    } else {
        printf("0\nCan't find! Please enter a valid number.\n");
    }

    return 0;
}
