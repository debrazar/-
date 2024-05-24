#include <stdio.h>

int main() {
    int n = 1;
    
    printf("n=%d \n", n);
    
    printf("префіксний: ++n=%d\n", ++n); 
    printf("після префіксного інкременту: n=%d\n", n);
    
    printf("постфіксний: n++=%d\n", n++); 
    printf("після постфіксного інкременту: n=%d\n", n);
    
    printf("префіксний: --n=%d\n", --n);
    printf("після префіксного декременту: n=%d\n", n);
    
    printf("постфіксний: n--=%d\n", n--);
    printf("після постфіксного декременту: n=%d\n", n);
    return 0;
}