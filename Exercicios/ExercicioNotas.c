#include <stdio.h>

int main()
{
int matematica,portugues,ciencias,media;

there:
printf("insira aqui as notas: \n");

    scanf("%d", &matematica);
    scanf("%d", &portugues);
    scanf("%d", &ciencias);
        
media = (matematica+portugues+ciencias)/3; 

    {
    if(media>=10 && media<= 20){
    printf("O aluno esta aprovado!\n" );
    printf( "A media e de: %d." ,media);
  
    }

    else if(media<10){
    printf( "O aluno esta reprovado!\n" );
    printf( "A media e de: %d.",media);

    }

    else{
    printf( "Erro! Insira as notas novamente!\n");
    goto there; // Transporta para o local que desejarmos;
    }   

    }
}

    
    

    

    
