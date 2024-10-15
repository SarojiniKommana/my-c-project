#include <stdio.h>

int main() {
    int n;
    float f,c;
    printf("1. Convert Fahrenheit to Celsius\n");
    printf("2. Convert Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", c);
    } else if (n == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &c);
        f = (c * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", f);
    } else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}