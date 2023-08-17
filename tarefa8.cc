#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste;
    
    printf("Digite o salário mensal atual: ");
    scanf("%f", &salarioAtual);
    
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    
    // Calcula o novo salário com o reajuste
    float novoSalario = salarioAtual + (salarioAtual * (percentualReajuste / 100));
    
    printf("O novo salário é: %.2f\n", novoSalario);
    
    
} 