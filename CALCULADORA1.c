#include <stdio.h>
#include <stdlib.h>

float ler_numero(char* mensagem) 
{
    char buffer[64]; 
    float valor;
    while (1) 
    {  
        printf("%s", mensagem);
        if (fgets(buffer, sizeof(buffer), stdin))
        {
            if (sscanf(buffer, "%f", &valor) == 1) 
            {
                return valor; 
            }
        }
        printf("Numero invalido. Tente novamente.\n"); 
    }
}
/// 
void mostrar_menu()
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
    printf("| ESCOLHA UMA OPCAO: (0-4)    |");
}

/// resultado 
void exibir_resultado(float resultado)
{
    printf("+=============================+\n");
    printf("| RESULTADO: %.2f             |\n", resultado);
    printf("+=============================+\n");
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
    char buffer_opcao[10];

    do 
    {
        mostrar_menu();  
        fgets(buffer_opcao, sizeof(buffer_opcao), stdin);
        opcao = atoi(buffer_opcao); 

        if(opcao >= 1 && opcao <= 4) 
        {
            n1 = ler_numero("Digite o primeiro numero: ");
            n2 = ler_numero("Digite o segundo numero: ");
        }          

        switch(opcao) 
        {
            case 1: // soma
                resultado = soma(n1, n2);
                exibir_resultado(resultado);
                break;

            case 2: // subtracao
                resultado = subtracao(n1, n2);
                exibir_resultado(resultado);
                break;

            case 3: // multiplicacao
                resultado = multiplicacao(n1, n2);
                exibir_resultado(resultado);
                break;

            case 4: // divisao
                if(n2 == 0) 
                {
                    printf("+=============================+\n");
                    printf("| ERRO: Divisao por 0!        |\n");
                    printf("+=============================+\n");
                    n1 = 0;
                    n2 = 0;
                    resultado = 0;
                }
                else 
                {
                    resultado = divisao(n1, n2);
                    exibir_resultado(resultado);
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
