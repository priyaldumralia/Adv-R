#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0.0, average;

    // Prompt user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Prompt user to enter each number and calculate the sum
    for(i = 1; i <= n; ++i) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    // Calculate the average
    average = sum / n;

    // Print the result
    printf("Average = %.2f\n", average);

    return 0;
}
