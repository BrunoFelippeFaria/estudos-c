#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **push(char **lista, int *tamanho, char *valor);

int main(int argc, char const *argv[]) {
    int tamanho = 0;
    char **animais = NULL;
    animais = push(animais, &tamanho, "Gorila");
    animais = push(animais, &tamanho, "Macaco");
    animais = push(animais, &tamanho, "Sapo");

    for (size_t i = 0; i < tamanho; i++){
        printf("%s\n", animais[i]);
    }

    free(animais);

    return 0;
}

char **push(char **lista, int *tamanho, char *valor){
    char **novaLista = realloc(lista, sizeof(char*) * (*tamanho+1));
    novaLista[*tamanho] = strdup(valor);
    (*tamanho)++;
    return novaLista;
}
