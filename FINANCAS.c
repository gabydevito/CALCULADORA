#include <stdio.h>   // Entradas e saídas (Essencial)
#include <stdlib.h>  // Comandos do sistema como 'system' (Essencial)
#include <string.h>  // Se for mexer muito com os nomes dos gastos (Recomendado)
#include <locale.h>  // Para usar acentos em Português (Opcional)
// menu
void mostrarmenu()
{
    printf("+=====================================+\n");
    printf("|========== MINHAS FINANÇAS ==========|\n");
    printf("+=====================================+\n");
    printf("| 1. Adicionar Ganho                  |\n");
    printf("+-------------------------------------+\n");
    printf("| 2. Adicionar Gasto                  |\n");
    printf("+-------------------------------------+\n");
    printf("| 3. Ver Saldo Atual                  |\n");
    printf("+-------------------------------------+\n");
    printf("| 4. Extrato                          |\n");
    printf("+-------------------------------------+\n");
    printf("| 0. Sair                             |\n");
    printf("+=====================================+\n");
    printf("| ESCOLHA UMA OPCAO: (0-4)            |\n");

}

int main()
{
    float SaldoTotal = 0.0;
    float saldos[20];
    float valores[20];
    char descricoes[20][50];
    int opcao;
    int totalMovimentacoes = 0;

    do
    {
        mostrarmenu();
        scanf("%d", &opcao); 
        
        switch (opcao)
        {
        case 1:
            printf("+-------------------------------------+\n");
            printf("|=========== [ 1 ] GANHOS ============|\n");
            printf("+-------------------------------------+\n");
            printf("| Descricao do ganho:                 |\n");
            scanf(" %[^\n]s", descricoes[totalMovimentacoes]);
            printf("+-------------------------------------+\n");
            printf("| Valor:                              |\n");
            float ganho;
            scanf("%f", &ganho);
            printf("+-------------------------------------+\n");
            valores[totalMovimentacoes] = ganho;
            SaldoTotal += ganho; // Soma ao total
            totalMovimentacoes++;
            break;

        case 2:
            printf("+-------------------------------------+\n");
            printf("|=========== [ 2 ] GASTOS ============|\n");
            printf("+-------------------------------------+\n");
            printf("| Descricao do gasto:                 |\n");
            scanf(" %[^\n]s", descricoes[totalMovimentacoes]);
            printf("+-------------------------------------+\n");
            printf("| Valor:                              |\n");
            float gasto;
            scanf("%f", &gasto);
            printf("+-------------------------------------+\n");
            valores[totalMovimentacoes] = -gasto;
            SaldoTotal -= gasto; // Soma ao total
            totalMovimentacoes++;
            break;
        
        case 3:
            system("cls");
            printf("+-------------------------------------+\n");
            printf("|============ [ 3 ] SALDO ============|\n");
            printf("+-------------------------------------+\n");
            printf("| SALDO ATUAL: R$ %.2f                |\n", SaldoTotal);
            printf("+-------------------------------------+\n");
            printf("\nPressione ENTER para voltar ao menu...");
            setbuf(stdin, NULL); getchar(); getchar();
            break;
        
        case 4:
            system("cls");
            printf("+-------------------------------------+\n");
            printf("|=========== [ 4 ] EXTRATO ===========|\n");
            printf("+-------------------------------------+\n");
            for (int i = 0; i < totalMovimentacoes; i++) 
            {
                if (valores[i] > 0) 
                {
                    printf("| [+] %-15s : R$ %7.2f |\n", descricoes[i], valores[i]);
                }
                else 
                {
                    printf("| [-] %-15s : R$ %7.2f |\n", descricoes[i], -valores[i]);
                }
            }
            printf("+-------------------------------------+\n");
            printf("\nPressione ENTER para voltar ao menu...");
            setbuf(stdin, NULL); getchar(); getchar();
            break;
        
        case 0:
            printf("+-------------------------------------+\n");
            printf("|====== FECHANDO O PROGRAMA... =======|\n");
            printf("+-------------------------------------+\n");
            break;

        default:
            printf("+-------------------------------------+\n");
            printf("|========= OPCAO INVALIDA! ===========|\n");
            printf("+-------------------------------------+\n");
            break;
        }
    } while (opcao != 0 );
    

    return 0;
}