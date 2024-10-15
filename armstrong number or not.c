#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2, r,a=0, n=0;
    printf("Enter an integer: ");
    scanf("%d", &n1);
    n2 = n1;
    while (n2 != 0) {
        n2=n2/10;
        n++;
    }
    n2 = n1;
    while (n2 != 0) {
        r = n2 % 10;
        a += pow(r, n);
        n2=n2/10;
    }
    if (a==n1)
        printf("%d is an Armstrong number.\n", n1);
    else
        printf("%d is not an Armstrong number.\n", n1);

    return 0;
}