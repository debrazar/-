#include <stdio.h>
#include <math.h>

int main() {
    int N;
    double X, sum = 0;

    printf("Введіть натуральне число N: ");
    scanf("%d", &N);

    printf("Введіть значення X (0 <= X <= PI/2): ");
    scanf("%lf", &X);

    for (int k = 1; k <= N; k++) {
        double Sk = (2 * k - 1) * sin(k * X);
        sum += Sk;
    }

    printf("Значення суми: %lf\n", sum);

    return 0;
}

