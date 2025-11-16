#include <stdio.h>
float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2, resultado;
    int operacao;
    
    printf("Calculadora - Operações Matemáticas\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    printf("\nOperações disponíveis:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite o número da operação: ");
    scanf("%d", &operacao);
  
    switch(operacao) {
        case 1:
            resultado = somar(num1, num2);
            printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
            
        case 2:
            resultado = subtrair(num1, num2);
            printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
            
        case 3:
            resultado = multiplicar(num1, num2);
            printf("\nResultado: %.2f × %.2f = %.2f\n", num1, num2, resultado);
            break;
            
        case 4:
            if(num2 == 0) {
                printf("\nErro: Não é possível dividir por zero!\n");
            } else {
                resultado = dividir(num1, num2);
                printf("\nResultado: %.2f ÷ %.2f = %.2f\n", num1, num2, resultado);
            }
            break;
            
        default:
            printf("\nErro: Operação inválida!\n");
            printf("Digite um número entre 1 e 4.\n");
    }
    
    return 0;
}
