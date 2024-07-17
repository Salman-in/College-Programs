#include <stdio.h>
#include <math.h>

void main() {
    int i, n;
    float x[10], *p, mean, variance, sd, sum = 0, sum1 = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &x[i]);
        sum += x[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++) {
        sum1 += pow((x[i] - mean), 2);
    }

    variance = sum1 / n;
    sd = sqrt(variance);

    printf("SUM = %.2f\n", sum);
    printf("MEAN = %.2f\n", mean);
    printf("VARIANCE = %.2f\n", variance);
    printf("STANDARD DEVIATION = %.2f\n", sd);
}
