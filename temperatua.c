#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
    float temperatura;
    char unidade;

    printf("temperatura: ");
    scanf("%f", &temperatura);

    printf("unidade (C ou F): ");
    scanf(" %c", &unidade);

    unidade = toupper(unidade);

    switch (unidade){
        //converte celcius para faherenhait
        case 'C':
            float f = (1.8 * temperatura) + 32;
            printf("a temperatura em faherenhait e %.2f", f);
            break;
        //converte faherenhait para celcius
        case 'F':
            float c = (temperatura - 32) / 1.8;
            printf("a temperatura em celcius e %.2f", c);
            break;
    }   

    return 0;
}
