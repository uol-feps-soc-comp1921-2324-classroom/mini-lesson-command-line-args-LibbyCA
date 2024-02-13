#include <stdio.h>

/**
 * argv[1] - num1
 * argv[2] - num2
*/


int main(int argc, char *argv) {
    //int num1, num2;

    // Prompt the user for input
    //printf("Enter the first number: ");
    //scanf("%d", &num1);

    //printf("Enter the second number: ");
    //scanf("%d", &num2);

    // Calculate and print the sum
    int sum = argv[1] + argv[2];
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
