#include<stdio.h>
#include<conio.h>
#define STOP '*'
main()
{
    char ch;
    ch=getchar();
    ml: if( ch != STOP)
{
    putchar(ch);
    ch=getchar(); goto ml; }