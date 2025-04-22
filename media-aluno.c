#include <stdio.h>

// Função para saudação personalizada
void boasVindas(char nome[]) {
    printf("Bem-vindo(a), %s!\n", nome);
    printf("Vamos calcular a sua média.\n");
}

// Função para calcular a média de três notas
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

// Função para exibir o resultado com base na média
void exibirResultado(float media) {
    printf("Sua média foi: %.2f\n", media);
    if (media >= 7.0) {
        printf("Parabéns, você foi aprovado(a)!\n");
    } else if (media >= 5.0) {
        printf("Você está em recuperação.\n");
    } else {
        printf("Infelizmente, você foi reprovado(a).\n");
    }
}

int main() {
    char nome[50];
    float nota1, nota2, nota3, media;

    // Obter o nome do aluno
    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Remover o caractere de nova linha do nome, se necessário
    if (nome[strlen(nome) - 1] == '\n') {
        nome[strlen(nome) - 1] = '\0';
    }

    // Chamar a função de boas-vindas
    boasVindas(nome);

    // Obter as notas do aluno
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcular a média
    media = calcularMedia(nota1, nota2, nota3);

    // Exibir o resultado
    exibirResultado(media);

    return 0;
}
