#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float a, b, c;
    printf("=============================================\n");
    printf("    Cálculo de equação do segundo grau\n");
    printf("=============================================\n");

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);
    
    printf("c: ");
    scanf("%f", &c);

    float delta = b*b - (4*a*c);

    if (delta < 0){
        printf("delta negativo");
        return 0;
    }

    float x1 = ((-b) + sqrt(delta)) / (2*a);
    float x2 = ((-b) - sqrt(delta)) / (2*a); 

    printf("x1: %.2f x2: %.2f", x1, x2);
    
    return 0;
}
