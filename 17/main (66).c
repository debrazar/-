#include <stdio.h>
int main() {
    int arr[5], sum = 0;
    int *ptr;
    printf("Введіть п'ять цілих чисел:\n");
    for(ptr = arr; ptr < arr + 5; ptr++) {
        scanf("%d", ptr);
        sum += *ptr;
    }
    printf("Сума елементів масиву: %d\n", sum);
    return 0;
}
