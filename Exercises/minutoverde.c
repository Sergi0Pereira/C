//Uma sequência de inteiros (com valores de 1 a 40) e que termina por -1.
//Dada uma sequência de produtos para reciclar, identificados por números de 1 a 40, determinar
//quantos seriam colocados em cada contentor.
//-1 é o stop.
//Output
/*Em cada linha escreve uma sequẽncia cor: numero, em que cor é a cor do contentor e numero é
o número de produtos colocados nesse contentor. Começa pelo contentor de cor azul, depois
amarelo, e finalmente verde.*/

#include <stdio.h>

int main(){

    //Inputs

    int input=1,p=0,v=0,e=0,x=-2;
    
    printf("Insira aqui os seus produtos:\n");

    for(x;x<input;x){
        scanf("%i",&input);

    // Processamento
        if(input>=1&&input<=10){
            p++;
        }
        if(input>=11&&input<=23){
            v++;
        }
        if(input>=24&&input<=40){
            e++;
        }
        if(input==-1){
            break;
        } 
        else if(input<1||input>40){
            printf("Erro.Produto nao aceite.\n");
            break;
        }
    }
    //Outputs
    printf("O numero de items no contentor azul e de: %i.\n",p);
    printf("O numero de items no contentor verde e de: %i.\n",v);
    printf("O numero de items no contentor amarelo e de: %i.\n",e);  

    return 0;
}
   
           
    
    


            



