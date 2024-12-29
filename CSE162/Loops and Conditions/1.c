/*Write a program in C to print all the numbers less than N that are divisible by both 3 (three) and 7
(seven) where N is a user provided input.*/
#include <stdio.h>

int main() {
    int N;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Numbers less than %d divisible by both 3 and 7:\n", N);

    // Loop through numbers from 1 to N-1
    for (int i = 1; i < N; i++) {
        // Check if the number is divisible by both 3 and 7
        if (i % 3 == 0 && i % 7 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
