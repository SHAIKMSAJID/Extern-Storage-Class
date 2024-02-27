#include<stdio.h>
void fun1();
void fun2();
//int a=10;
void main()
{
    extern int a;
    printf(" %d",a);
    fun1();
    fun2();   
}
void fun1()
{
    int a=2;
    a++;
    printf("\n a = %d ",a);
}
void fun2()
{
    printf("\n Hello from fun2");
}
int a=100;