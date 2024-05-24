#include<stdio.h>
int main(void)
{
    int x=99;
    int *p1, *p2;
    p1=&x;
    p2=p1;
    printf("Znachennya poadresi p1 ip2:%d%dn",*p1,*p2);
    printf("Znachennyavkazivnukivp1ip2:%p%p",p1,p2);
    return 0;
}
