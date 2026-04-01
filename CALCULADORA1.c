#include <stdio.h>

void mostrarMenu()
{
    printf("+=============================+\n");
    printf("|        MENU PRINCIPAL       |\n");
    printf("+=============================+\n");
    printf("|[ 1 ] SOMA                   |\n");
    printf("|[ 2 ] SUBTRACAO              |\n");
    printf("|[ 3 ] MULTIPLICACAO          |\n");
    printf("|[ 4 ] DIVISAO                |\n");
    printf("|[ 0 ] SAIR                   |\n");
    printf("+=============================+\n");
    printf("| ESCOLHA UMA OPCAO: (0-4)    |\n");
}
// ler numeros de operacao
float lerPrimeiroNumero() 
{
    float n;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n);
    return n;
}
float lerSegundoNumero() 
{
    float n;
    printf("Digite o segundo numero: ");
    scanf("%f", &n);
    return n;
}

// calculos
float soma(float n1, float n2) 
{
    return n1 + n2;
}
float subtracao(float n1, float n2)
{
    return n1 - n2;
}
float multiplicacao(float n1, float n2)
{
    return n1 * n2;
}
float divisao(float n1, float n2)
{
    return n1 / n2;
}

/// 
int main ()
{
    int opcao;       // para armazenar a escolha do menu
    float n1, n2;    // para armazenar os números digitados
    float resultado; // para armazenar o resultado do cálculo

    do 
    {
        mostrarMenu();             // mostra o menu
        scanf("%d", &opcao);       // lê a opção do usuário
        switch(opcao) 
        {
            case 1: // soma
                n1 = lerPrimeiroNumero();
                n2 = lerSegundoNumero();
                resultado = soma(n1, n2);
                printf("+=============================+\n");
                printf("| RESULTADO: %.2f             |\n", resultado);
                printf("+=============================+\n");
                break;

            case 2: // subtracao
                n1 = lerPrimeiroNumero();
                n2 = lerSegundoNumero();
                resultado = subtracao(n1, n2);
                printf("+=============================+\n");
                printf("| RESULTADO: %.2f             |\n", resultado);
                printf("+=============================+\n");
                break;

            case 3: // multiplicacao
                n1 = lerPrimeiroNumero();
                n2 = lerSegundoNumero();
                resultado = multiplicacao(n1, n2);
                printf("+=============================+\n");
                printf("| RESULTADO: %.2f             |\n", resultado);
                printf("+=============================+\n");
                break;

            case 4: // divisao
                n1 = lerPrimeiroNumero();
                n2 = lerSegundoNumero();
                if(n2 == 0) 
                {
                    printf("+=============================+\n");
                    printf("| ERRO: Divisao por 0!       |\n");
                    printf("+=============================+\n");
                    n1 = 0;
                    n2 = 0;
                    resultado = 0;
                }
                else 
                {
                    resultado = divisao(n1, n2);
                    printf("+=============================+\n");
                    printf("| RESULTADO: %.2f              |\n", resultado);
                    printf("+=============================+\n");
                }
                break;

            case 0: // sair
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
     
}