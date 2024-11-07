#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
    char operador;
    float n1, n2;

    printf("digite o numero 1: ");
    scanf("%f", &n1);
    
    printf("digite o operador: ");
    scanf(" %c", &operador);
    
    printf("digite o numero 2: ");
    scanf("%f", &n2);
    
    float conta;

    switch(operador){
        case '+':
            conta = n1 + n2;
            break;
        case '-':
            conta = n1 - n2;
            break;
        case '*':
            conta = n1 * n2;
            break;
        case '/':
            conta = n1 / n2;
            break;
    }

    printf("%.2f %c %.2f = %.2f", n1, operador, n2, conta);
    
    return 0;
}
