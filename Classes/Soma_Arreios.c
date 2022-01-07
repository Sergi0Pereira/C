#include <stdio.h>

int main()
{
    int a[10];
    a[1]=200;

    a[9]= 15;

    a[4]= a[1]+a[9];

    a[3]=a[1]-a[9]-a[4];

    printf("%d\n", a[4]);
    printf("%d", a[3]); 
}