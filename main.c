// Sequência de Fibonacci
#include <stdio.h>

// Função para verificar se um número pertence à sequência 
int pertenceFibonacci(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    
    int a = 0, b = 1, c = a + b;
    
    while (c <= num) {
        if (c == num) {
            return 1; // Número encontrado na sequência
        }
        a = b;
        b = c;
        c = a + b;
    }
    
    return 0; // Número não encontrado na sequência
}


// Função Principal
int main() {
    int num;
    
    printf("Informe um numero: ");
    scanf("%d", &num);
    
    if (pertenceFibonacci(num)) {
        printf("O numero %d pertence à sequencia de Fibonacci.\n", num);
    } else {
        printf("O numero %d nao pertence à sequencia de Fibonacci.\n", num);
    }
    
    return 0;
}
