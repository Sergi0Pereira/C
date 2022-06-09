#include <stdio.h>
#include <stdlib.h>

    int
    main()

{

    // Declarar uma variavel
    double n1, n2, res;
    int res2;
    char op , resp;

    printf("Deseja utilizar a calculadora:");
    scanf("%c", &resp);

    if (resp == 's')
    {

        printf("Insira o seu primeiro numero:");
        scanf("%d", &n1);

        printf("Insira o seu segundo numero:");
        scanf("%d", &n2);

        printf("Insira a operacao que pretende efectuar:");
        scanf_s(" %c", &op);

        switch (op)
        {
        case '+':
            res = n1 + n2;
            break;

        case '-':
            res = n1 - n2;
            break;

        case '/':
            res = n1 / n2;
            break;

        case '*':
            res = n1 * n2;
            break;

        case '%':
        n1= (int)n1;
        n2= (int)n2;
         res2 = (int) n1 % (int) n2;
            break;

        default:

            printf("O seu operador é inválido!");
            break;
        }
        if (op == '%')
        {
            printf("O resultado e de:%d", res2);
        }
        else
        {
            printf("O resultado e de:%d", res);
        }
       
    }
}
