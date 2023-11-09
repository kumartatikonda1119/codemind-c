#include <stdio.h>

int main() {
    int num, digit, largest = 0;

    // Read the number from the user
    
    scanf("%d", &num);

    // Handle negative numbers by taking the absolute value


    // Find the largest digit
    while (num > 0) {
        digit = num % 10;
        if (digit > largest) {
            largest = digit;
        }
        num /= 10;
    }

    // Print the largest digit
    printf("%d", largest);

    
}
