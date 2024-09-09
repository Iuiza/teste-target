#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, temp;

    while (a <= n) {
        if (a == n) {
            return 1; 
        }
        temp = a;
        a = b;
        b = temp + b;
    }
    
    return 0;
}

int main() {
    int num;
    
    printf("Informe um numero: ");
    scanf("%d", &num);
    
    if (fibonacci(num)) {
        printf("%d pertence a sequencia de Fibonacci.\n", num);
    } else {
        printf("%d nao pertence a sequencia de Fibonacci.\n", num);
    }
    
    return 0;
}