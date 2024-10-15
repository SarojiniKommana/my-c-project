#include <stdio.h>

int main() {
    int d, b[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &d);
    if (d == 0) {
        printf("Binary number: 0\n");
    } else {
        while (d > 0) {
           b[i] = d % 2;
            d = d / 2;
            i++;
        }
        printf("Binary number: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", b[j]);
        }
        printf("\n");
    }

    return 0;
}