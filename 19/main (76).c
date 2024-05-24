#include <stdio.h>
int main() {
    FILE *file;
    int numbers[12];
    int i;

    //Відкриваєм файл для запису
    file = fopen("numbers.txt", "w");
    if (file == NULL) {
        perror("numbers.txt");
        return 1;
    }

    //Записуєм числа від 1 до 12 у файл
    for (i = 1; i <= 12; i++) {
        fprintf(file, "%d ", i);
    }

    //Закриваєм файл
    fclose(file);

    //Відкриваєм файл
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("numbers.txt");
        return 1;
    }
    //Читаєм числа з файлу і зберігаємо їх у масиві
    for (i = 0; i < 12; i++) {
        fscanf(file, "%d", &numbers[i]);
    }

    //Закриваєм файл
    fclose(file);

    //Виводим числа з масиву на екран
    for (i = 0; i < 12; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
