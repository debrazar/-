#include<stdio.h>
main()
{
    int vik;
    char name[30];
    printf("Vash vik?\n");
    scanf("%d",&vik);
    printf("Vvedit vashe imy?\n");
    scanf("%s",name);
    printf("Pryvit %s jakomy %d rokiv",name,vik);
}