#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    
    // Initialize the random number generator with the current time
    srand(time(NULL));
    
    // Generate a random number between -100 and 100
    n = rand() % 201 - 100;
    
    // Print the value of n
    printf("n = %d\n", n);
    
    // Check if n is positive or negative and print the result
    if (n > 0) {
        printf("n is positive\n");
    } else if (n < 0) {
        printf("n is negative\n");
    } else {
        printf("n is zero\n");
    }
    
    return 0;
}

