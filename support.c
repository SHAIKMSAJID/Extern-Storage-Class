#include<stdio.h>
void display()
{
    extern int x;
    x++;
    printf("\n Hello from Supprt file ");
    printf("\n X=%d",x);
}