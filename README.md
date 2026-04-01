
# CALCULADORA - Versão 2

## 1. Como Compilar e Executar

### Usando Visual Studio
1. Abra o Visual Studio.
2. Crie um novo projeto em C.
3. Adicione o arquivo `CALCULADORA1.c`.
4. Compile e execute o programa.

### Usando Terminal (Mac ou Linux)
1. Abra o terminal na pasta onde está o arquivo `CALCULADORA1.c`.
2. Compile o programa usando `gcc`:
   ```bash
   gcc CALCULADORA1.c -o calculadora
3. Execute o programa:
    ```bash
    ./calculadora

### Usando Terminal no Windows
1. Abra o Terminal (CMD ou PowerShell) na pasta onde está o arquivo CALCULADORA1.c.
2. Compile usando o gcc do MinGW:
   ```bash
   gcc CALCULADORA1.c -o calculadora.exe
3. Execute o programa:
   ```bash
   calculadora.exe

## 2. Como Usar (Detalhado)
1. Ao executar o programa, um menu principal será exibido com as opções:
```
[1] SOMA
[2] SUBTRACAO
[3] MULTIPLICACAO
[4] DIVISAO
[0] SAIR
```
2. Digite o número da opção desejada e pressione Enter.
3. O programa solicitará que você digite dois números.
4. O resultado da operação será mostrado na tela.
5. O programa volta ao menu principal automaticamente, permitindo fazer vários cálculos.
6. Para encerrar, escolha a opção [0] SAIR.

**Observação: Se você tentar dividir por zero, o programa exibirá uma mensagem de erro e retornará ao menu principal.**

## 3. Exemplos de Uso
  ### 1. SOMA
```
+=============================+
|        MENU PRINCIPAL       |
+=============================+
|[ 1 ] SOMA                   |
|[ 2 ] SUBTRACAO              |
|[ 3 ] MULTIPLICACAO          |
|[ 4 ] DIVISAO                |
|[ 0 ] SAIR                   |
+=============================+
| ESCOLHA UMA OPCAO: (0-4)    |

Usuário digita: 1

Digite o primeiro numero: 5
Digite o segundo numero: 3
Resultado: 8.00
```
  ### 2. DIVISAO POR ZERO
```
Usuário escolhe 4 e digita 10 e 0:

ERRO: Divisao por 0!
```
## 4. Contato

Se você tiver dúvidas, sugestões ou quiser melhorias:

##### Nome: Gabriela Devito
##### Email: prevatog@gmail.com

