#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);
    int d = b * b - 4 * a * c; 
    float root1, root2;
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root 1 = %.2f\n", root1);
        printf("root 2 = %.2f\n", root2);
    } else if (d == 0) {
        root1 = -b / (2 * a);
        printf("root 1 = root 2 = %.2f\n", root1);
    } else {
        float k1 = -b / (2 * a);
        float k2 = sqrt(-d) / (2 * a);
        printf("root 1 = %.2f + %.2fi\n", k1, k2);
        printf("root 2 = %.2f - %.2fi\n", k1, k2);
    }

    return 0;
}
