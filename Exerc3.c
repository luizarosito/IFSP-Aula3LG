#include <stdio.h>


int main(){

  char oper;
  float val1, val2;
  printf ("Qual a operação: +, *, / ou -\n");
  scanf("%c", &oper);
  printf("Insira o valor 1\n");
  scanf("%f", &val1);
  printf("Insira o valor 1\n");
  scanf("%f", &val2);

    switch(oper){
    case '+':
        printf("%f", val1 + val2);
        break;
    case '*':
        printf("%f", val1 * val2);
        break;
    case '/':
        printf("%f", val1 / val2);
        break;
    case '-':
        printf("%f", val1 - val2);
        break;
      default:
        printf("Operação não reconhecida");
    }
}
