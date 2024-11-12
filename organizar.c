#include <stdio.h>

void organizarInt(int lista[], int *tamanho){
    for (size_t i = 0; i < *tamanho - 1; i++) {
        for (size_t j = 0; j < *tamanho - i - 1; j++){
            //trocar > por < faz a lista ser organizada na ordem inversa
            if (lista[j] > lista[j+1]) {
                int temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp;
            } 
        }    
    }
}

void organizarChar(char lista[], int *tamanho){
    for (size_t i = 0; i < *tamanho - 1; i++) {
        for (size_t j = 0; j < *tamanho - i - 1; j++){
            if (lista[j] > lista[j+1]){
                int temp = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = temp; 
            }
        }
    }
    
}

int main(int argc, char const *argv[]) {
    int numeros[] = {5, 2, 8, 10, 1, 3};
    int numTamanho = sizeof(numeros) / sizeof(numeros[0]); 

    organizarInt(numeros, &numTamanho);

    //mostra a lista numeros
    for (size_t i = 0; i < numTamanho; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    char letras[] = {'b', 'a', 't', 'z', 'c', 'y'};
    int letTamanho = sizeof(letras) / sizeof(letras[0]);

    organizarChar(letras, &letTamanho);

    //mostra a lista letras
    for (size_t i = 0; i < letTamanho; i++) {
        printf("%c ", letras[i]);
    }

    return 0;
}
