#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 2, b = 0, c = 1;
    
    if (a > 0 && b < -3)
        c = b * b / a; 
    printf("c=%d\n", c); 

    a = ++c / a + a % c;
    b += c * c;

    if (a < b || a < 0) {
        c *= a;
        printf("c=%d\n", c); 
    }
    else if (c++ == 2) {
        printf("c=%d\n", c);
    }

    if (b < a && a == 2)
        c = 2 * a + 1;
    else {
        c = (b--) + a;
        a = 0;
    }
    printf("c=%d\n", c); 

    a = b = 2;
    if (c >= 3) {
        if (a < 0 || a > c)
            c = 0;
        else {
            a = 1;
            c = 7;
            printf("c=%d\n", c); 
        }
    }
    if (c > 0 && c < 10) {
        if (a > 0)
            printf("c=%d\n", c++);
    }
    else
        c = 10;

    if (c <= 5) {
        if ((a = b + 1) > 2)
            c %= 2;
    }
    printf("c=%d\n", c); 

    a = 3; 
    b = -1;
    if (b > 0)
        c = 1;
    else if (b < -10) {
        c = -1;
        printf("c=%d\n", c);
    }
    else if (b <= -3)
        c = 2;
    else
        c = b * b + 10;
    printf("c=%d\n", c); 
    getch();
}
