#include <stdio.h>

int main() {
    float p1 = 10.5, p2 = 20.0, p3 = 5.75;
    int k1 = 3, k2 = 5, k3 = 2;
    float t1 = p1 * k1;
    float t2 = p2 * k2;
    float t3 = p2 * k3;
    float allt = t1+t2+t3;

    printf("Товар | Ціна | Кількість | Загальна вартість\n");
    printf("-------------------------------------------\n");
    printf("1     | %.2f | %d         | %.2f\n", p1, k1, t1);
    printf("2     | %.2f | %d         | %.2f\n", p2, k2, t2);
    printf("3     | %.2f | %d         | %.2f\n", p3, k3, t3);
    printf("-------------------------------------------\n");
    printf("Загалом                   | %.2f\n", allt);
}