#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//Esse programa mostra todos os numeros primos em um intervalo escolhido pelo usuario

int *push(int *lista, int *tamanho, int valor);
void mostrarLista(int *lista, int *tamanho);

int main(int argc, char const *argv[]) {
    SetConsoleOutputCP(CP_UTF8);
    printf("========================================\n");
    printf("    Cálculadora de numeros primos\n");
    printf("========================================\n");

    int tamanho = 0;
    int *listaPrimos = NULL;

    int inpt1, inpt2, n1, n2;

    printf("Digite um número: ");
    scanf("%d", &inpt1);
    printf("Digite mais um número: ");
    scanf("%d", &inpt2);

    if (inpt2 > inpt1) {
        n1 = inpt1;
        n2 = inpt2;
    }
    
    else {
        n2 = inpt1;
        n1 = inpt2;
    }

    for (size_t c = n1; c <= n2; c++) {    
        int divisores = 0;
        
        for(size_t i = 1; i < c; i++){
            if (c % i == 0){
                divisores++;
            }
        }
        
        if (divisores == 1){
            listaPrimos = push(listaPrimos, &tamanho, c);
        }
    }
    mostrarLista(listaPrimos, &tamanho);

    return 0;
}

int *push(int *lista, int *tamanho, int valor){
    int *novaLista = realloc(lista, sizeof(int) * (*tamanho+1));
    novaLista[*tamanho] = valor;
    (*tamanho)++;
    return novaLista;
}

void mostrarLista(int *lista, int *tamanho){
    printf("{ ");
    for (size_t i = 0; i < *tamanho; i++) {
        printf("%d", lista[i]);
        if (i != *tamanho-1) {
            printf(", ");
        }
    }
    printf(" }");
}