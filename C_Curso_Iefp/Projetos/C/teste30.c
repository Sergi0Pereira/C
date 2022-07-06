#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void funcoesMatematicas()
{
    double n,n1,res,res2;
 

    printf("Insira um valor:");
        scanf("%lf",&n);
        n1=abs(n);
        res= sqrt(n); // Raiz quadrada
    
    printf("A raiz quadrada de %2.lf e %.2f!\n",n,res); // imprime a raiz quadrada

    res2=ceil(res);
    printf("Arredondado: %.2f: %.2f (duas casas)\n", res, res2); // Arrendonda à unidade para cima

    res2=floor(res);
    printf("Arredondado: %.2f: %.1f (uma casa)\n",res,res2); // Arrendonda à unidade para baixo

    res2 = pow(n,2);
    printf("Quadrado de: %.2f: %.1f (uma casa)\n",res, res2); // Arrendonda à unidade para baixo

    res2=cbrt(n);
    printf("Raiz Cubica de %.2f: %.2f", n , res2);
}

int main(){
    funcoesMatematicas();
}