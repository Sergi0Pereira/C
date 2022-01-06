/*scanf1. Write a program in C to store elements in an array and print it. Go to the editor
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9*/

#include <stdio.h>
int main(){

int c[10],i=1,e=0;
    printf("Input the elements of the array:\n");
    while(e<10){
        printf("Element %d : ",e);
        scanf("%d",&c[e]);
        e++;
    }
    e=0;
    printf("Elements in array are:");
    while(e<10){
        printf("%d ", c[e]);
        e++;
    }
    printf("*/");
return 0;
}

