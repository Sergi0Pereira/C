#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    int
    main()

{

    // Declarar uma vari

    int dia;

    printf("Insira o numero do seu dia:");
    scanf("%d", &dia);

        switch (dia)
        {
        case 1:
            printf("Domingo");
            break;

        case 2:
            printf("Segunda-feira");
            break;

        case 3:
            printf("Terça-Feira");
            break;

        case 4:
            printf("Quarta-Feira");
            break;

        case 5:
            printf("Quinta-Feira");
            break;

        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("O seu numero de dia e invalido!");
            break;
        }
     
                
        
        
}