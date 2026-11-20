#include <stdio.h>

int main(void) {
    int numero = 20;
    int *p = &numero;

    printf("Valor da variável: %d\n", numero);
    printf("Endereço: %p\n", (void *)&numero);
    printf("Valor pelo ponteiro: %d\n", *p);

    return 0;
}
