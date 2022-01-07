/* 2. Write a program in C to read n number of values in an array and display it in reverse order. Go to the editor
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2*/

#include <stdio.h>
int main(){

int x=0,c=0,sum=0;

    printf("Input the number of elements to store in the array : ");
    
        scanf("%d",&x);

    printf("Input %d numbers of elements in the array: \n", x);

    int array[x];
        while(c<x){
            printf("element - %d: ",c);
            scanf("%d",&array[c]);
            c++;
        }

        printf("The values store into the array are : ");
        c=0;

        while(c<x){
            printf("%d ",array[c]);
            c++;
        }

        printf("\n");
        printf("The values store into the array in reverse are :");
        c=x-1;
        

        while(c>=0){
            printf(" %d ",array[c]);
            sum=sum+array[c];
            c--;
            }
        printf("\nThe the sum of the array is: %d",sum);    
        
    
return 0;
}
 
 