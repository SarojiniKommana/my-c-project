#include <stdio.h>

int main() {
    int X, Y, a, b;
    printf("Enter the value of X: ");
    scanf("%d", &X);
    printf("Enter the value of Y: ");
    scanf("%d", &Y);
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Numbers divisible by both %d and %d in the range %d, %d are:\n", a, b, X, Y);

    for (int i = X; i <= Y; i++) {
        if (i % a == 0 && i % b == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}