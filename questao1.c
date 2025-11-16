#include <stdio.h>

#define TAM 10

float calcularMedia(int vetor[]) {
    int soma = 0;
    for(int i = 0; i < TAM; i++) {
        soma += vetor[i];
    }
    return (float)soma / TAM;
}

void encontrarMaiorMenor(int vetor[], int *maior, int *menor) {
    *maior = vetor[0];
    *menor = vetor[0];
    
    for(int i = 1; i < TAM; i++) {
        if(vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if(vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int contarPares(int vetor[]) {
    int count = 0;
    for(int i = 0; i < TAM; i++) {
        if(vetor[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int numeros[TAM];
    int maior, menor;
    
    printf("Digite 10 números inteiros:\n");
    
    for(int i = 0; i < TAM; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    float media = calcularMedia(numeros);
    encontrarMaiorMenor(numeros, &maior, &menor);
    int qtdPares = contarPares(numeros);
    
    printf("\n--- Resultados ---\n");
    printf("Média: %.2f\n", media);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Quantidade de números pares: %d\n", qtdPares);
    
    return 0;
}
