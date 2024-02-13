#include <stdio.h>
#include <stdlib.h>


/**
 * argv[1] - num1
 * argv[2] - num2
*/


int main(int argc, char *argv[]) {
    //int num1, num2;

    if (argc != 3)
    {
        printf("Usage t <sum>\n");
        return 0;
    }

    // Prompt the user for input
    //printf("Enter the first number: ");
    //scanf("%d", &num1);
    int num1 = atoi(argv[1]);

    //printf("Enter the second number: ");
    //scanf("%d", &num2);
    int num2 = atoi(argv[2]);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
