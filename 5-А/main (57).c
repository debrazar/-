#include <stdio.h>
#include <math.h>
int main() {
    int i = 0;
    float precision_float = 1.0f;
    double precision_double = 1.0;
    long double precision_long_double = 1.0L;
    
    for (i = 0; (1.0f + precision_float) > 1.0f; i++) {
        precision_float /= 2.0f;
    }
    printf("Машинний нуль для типу float: %e\n", precision_float);
    printf("Кількість ділень на 2 (float): %d\n\n", i);

    i = 0;  
    while ((1.0 + precision_double) > 1.0) {
        precision_double /= 2.0;
        i++;
    }
    printf("Машинний нуль для типу double: %le\n", precision_double);
    printf("Кількість ділень на 2 (double): %d\n\n", i);

    i = 0;  
    do {
        precision_long_double /= 2.0L;
        i++;
    } while ((1.0L + precision_long_double) > 1.0L);
    printf("Машинний нуль для типу long double: %Le\n", precision_long_double);
    printf("Кількість ділень на 2 (long double): %d\n\n", i);

    return 0;
}
