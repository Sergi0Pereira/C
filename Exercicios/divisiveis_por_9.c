/*39. Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9. Go to the editor
Expected Output :
Numbers between 100 and 200, divisible by 9 :   nota: tenho de descobrir os que tem resto zero quando se dividem por 9
108 117 126 135 144 153 162 171 180 189 198     notas: depois tenho de pergar nesses numeros e soma-los 
The sum : 1683*/

#include <stdio.h>
int divisao_por_9(){
    int min,max,div,soma=0;

    scanf("%d",&min);
    scanf("%d",&max);
    scanf("%d",&div);
    printf("\n");

    for(min;min<=max;min++){
        if(min%div==0){
            soma+=min;
            printf("%d",min);
            printf(" ");
        }
    }
    printf("\n");
    printf("%d",soma);
    return min;
}

int main(){
    divisao_por_9();  
}
