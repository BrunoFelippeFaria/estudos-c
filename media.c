#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int* push(int *lista, int *tamanho, int valor);

int main(int argc, char const *argv[]) {
    SetConsoleOutputCP(CP_UTF8);
    printf("=========================\n");
    printf("    Cáculo de média\n");
    printf("=========================\n");


    int tamanho = 0;
    int *x = NULL;

    while (1){
        char n[60];
        printf("Digite suas notas [q para fechar]: ");
        scanf("%s", &n);
        
        if (strcmp(n, "q") == 0){
            break;
        }

        x = push(x, &tamanho, atoi(n));
    }
    
    int soma = 0;

    for(int i = 0; i < tamanho; i++) {
        soma += x[i];
    }

    int media = soma / tamanho;

    printf("sua média é %d", media);
    
    free(x);
    return 0;
}

int* push(int *lista, int *tamanho, int valor){
    int *novaLista = realloc(lista, (*tamanho + 1) * sizeof(int));
    novaLista[*tamanho] = valor;
    (*tamanho)++;
    return novaLista;
}