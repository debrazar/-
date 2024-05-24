#include <stdio.h>
int main() {
    float num1, num2, result;
    char op;
    printf("Введіть перше число: ");
    scanf("%f", &num1);
    printf("Введіть друге число: ");
    scanf("%f", &num2);
    printf("Виберіть операцію (+, -, *, /): ");
    scanf(" %c", &op);
    if (op == '+') {
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    } else if (op == '-') {
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    } else if (op == '*') {
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        } else {
            printf("Помилка: Ділення на нуль!\n");
        }
    } else {
        printf("Неправильний оператор!\n");
    }
    return 0;
}