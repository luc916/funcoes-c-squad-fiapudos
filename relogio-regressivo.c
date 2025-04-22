#include <stdio.h>
#include <unistd.h> // Biblioteca para usar sleep()

void contagemRegressiva(int inicio) {
    printf("Iniciando contagem regressiva...\n");
    for (int i = inicio; i >= 0; i--) {
        printf("%d\n", i);
        sleep(1); // Pausa de 1 segundo
    }
    printf("Tempo esgotado! \n");
}

int main() {
    int numero;
    printf("Digite um número para iniciar a contagem regressiva: ");
    scanf("%d", &numero);
    contagemRegressiva(numero);
    return 0;
}
