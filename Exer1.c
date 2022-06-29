#include <stdio.h>

int main ()
{
    float valor1, valor2;
    printf("Valor 1 \n");
    scanf("%f", &valor1);

    printf("\n Valor 2 \n");
    scanf("%f", &valor2);

    if(valor1> valor2){
        printf("%f maior que valor 2", valor1);
    }
    else if(valor2>valor1){
        printf("%f maior que valor 1", valor2);
    }
    else {
        printf("%f e %f são iguais", valor1, valor2);
    }
    return 0;
}