#include <stdio.h>


int main ()
{
//////// VERSAO 1 ////////

    float n1, n2;
    char operacao;

    printf("+============================+\n");
    printf("|---------CALCULADORA--------|\n");
    printf("+============================+\n");
    printf("| ESCOLHA O PRIMEIRO NUMERO: |\n");
    scanf("%f", &n1);
    printf("+============================+\n");
    printf("| ESCOLHA O SEGUNDO NUMERO:  |\n");
    scanf("%f", &n2);
    printf("+============================+\n");
    printf("| ESCOLHA: (+, -, *, /)      |\n");
    scanf(" %c", &operacao);

    if (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/') 
    {
        printf("+============================+\n");
        printf("|    OPERACAO INVALIDA!      |\n");
        printf("+============================+\n");
        return 1;
    } 
    
 
    if (operacao == '+')
    {
        float resultado = n1 + n2;

        printf("+============================+\n");
        printf("|-------------SOMA-----------|\n");
        printf("+============================+\n");
        printf("|%.2f + %.2f = %.2f|\n", n1, n2, resultado);
        printf("+============================+\n");
    }
    
    else if (operacao == '-')
    {
        float resultado = n1 - n2; 

        printf("+============================+\n");
        printf("|-----------SUBTRACAO--------|\n");
        printf("+============================+\n");
        printf("|%.2f - %.2f = %.2f|\n", n1, n2, resultado);
        printf("+============================+\n");
    }

    else if (operacao == '*')
    {
        float resultado = n1 * n2;

        printf("+============================+\n");
        printf("|---------MULTIPLICACAO------|\n");
        printf("+============================+\n");
        printf("|%.2f * %.2f = %.2f|\n", n1, n2, resultado);
        printf("+============================+\n");
    }

    else if (operacao == '/')
    {
        if (n2 == 0)
        {
            printf("+============================+\n");
            printf("| ERRO: DIVISAO POR 0!       |\n");
            printf("+============================+\n");
        }
        
        else
        {
        float resultado = n1 / n2;

        printf("+============================+\n");
        printf("|-----------DIVISAO----------|\n");
        printf("+============================+\n");
        printf("|%.2f / %.2f = %.2f|\n", n1, n2, resultado);
        }
        printf("+============================+\n");
    }
     
}