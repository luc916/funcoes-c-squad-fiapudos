#include <stdio.h>

// Protótipos das funções
int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

int main() {
    int a, b, operacao;
    float resultado;

    // Exibe o menu de operações
    printf("Calculadora - Menu\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Escolha uma operação (1/2/3/4): ");
    scanf("%d", &operacao);

    // Solicita os dois números para a operação
    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Realiza a operação escolhida
    switch (operacao) {
        case 1:
            resultado = somar(a, b);
            printf("Resultado da soma: %d\n", (int)resultado);
            break;
        case 2:
            resultado = subtrair(a, b);
            printf("Resultado da subtração: %d\n", (int)resultado);
            break;
        case 3:
            resultado = multiplicar(a, b);
            printf("Resultado da multiplicação: %d\n", (int)resultado);
            break;
        case 4:
            if (b != 0) {
                resultado = dividir(a, b);
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero não permitida.\n");
            }
            break;
        default:
            printf("Opção inválida! Escolha uma operação de 1 a 4.\n");
    }

    return 0;
}

// Função para somar
int somar(int a, int b) {
    return a + b;
}

// Função para subtrair
int subtrair(int a, int b) {
    return a - b;
}

// Função para multiplicar
int multiplicar(int a, int b) {
    return a * b;
}

// Função para dividir
float dividir(int a, int b) {
    return (float)a / b;
}
