#include <stdio.h>
#include <math.h>

double taylor_sin(double x, double a) {
    double term = x, y = x;
    int n = 1;
    while (fabs(term) >= a) {
        term = -term * x * x / ((2 * n) * (2 * n + 1));
        y += term;
        n++;
    }
    return y;
}
int main() {
    double x, y_lib, y_taylor;
    int iterations;
    printf("Введіть значення x (0 <= x <= Pi/2): ");
    scanf("%lf", &x);
    if (x < 0 || x > M_PI / 2) {
        printf("Неправильне значення x. Введіть x в межах 0 <= x <= Pi/2.\n");
        return 1;
    }
    y_lib = sin(x);
    y_taylor = taylor_sin(x, 0.00001);
    printf("Значення sin(x) за допомогою бібліотечної функції: %.6lf\n", y_lib);
    printf("Значення sin(x) за допомогою ряду Тейлора: %.6lf\n", y_taylor);
    iterations = (int)log(0.00001 / fabs(y_taylor - y_lib)) / log(x);
    printf("Кількість ітерацій: %d\n", iterations);
    return 0;
}
