#include <stdio.h>
// Оголошення структури щоб зберегти інфу
struct Employee {
    char name[50];
    float weight;
    float height;
    int age;
};
int main() {
    struct Employee emp;
    printf("Введіть ім'я працівника: ");
    scanf("%s", emp.name);
    printf("Введіть вагу працівника: ");
    scanf("%f", &emp.weight);
    printf("Введіть висоту працівника: ");
    scanf("%f", &emp.height);
    printf("Введіть вік працівника: ");
    scanf("%d", &emp.age);
    // Виведення інфи про працівника
    printf("\nІнформація про працівника %s\n", emp.name);
    printf("----------------------------------------\n");
    printf("Ім'я: %s\n", emp.name);
    printf("Вага: %.2f кг\n", emp.weight);
    printf("Висота: %.2f м\n", emp.height);
    printf("Вік: %d років\n", emp.age);
    return 0;
}
