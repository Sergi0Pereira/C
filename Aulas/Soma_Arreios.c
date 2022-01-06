#include <stdio.h>

int main()
{
    int a[10];
    a[1]=200;

    a[9]= 15;
    a[4]= a[1]+a[9];

    printf("%d", a[4]); 
}