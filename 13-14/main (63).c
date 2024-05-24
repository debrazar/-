#include <stdio.h>
void printSubstring(char str[], int n) {
    for (int i = 0; i < n && str[i] != '\0'; i++) {
        putchar(str[i]);
    }
}
int main() {
    char str[] = "Мене звати Адам";
    int numChars = 7;
    printf("Рядок: %s\n", str);
    printf("Кількість символів для виводу: %d\n", numChars);
    printf("Виведений підрядок: ");
    printSubstring(str, numChars);
    printf("\n");
    return 0;
}
