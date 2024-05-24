#include <stdio.h>
#include <string.h>

#define PRAISE "О, яке чудове ім'я!"

int main() {
    char name[50];
    printf("Як Вас звати?\n");
    scanf("%s", name);
    printf("Привіт, %s. %s\n", name, PRAISE);
    printf("Ваше ім'я складається з %d літер і займає %d комірок пам'яті.\n", strlen(name), sizeof(name));
    printf("Вітальна фраза складається з %d літер і займає %d комірок пам'яті.\n", strlen(PRAISE), sizeof(PRAISE));
    return 0;
}
