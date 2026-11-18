#include <stdio.h>

void exibirMenu(void) {
    printf("===== CALCULADORA =====\n");
    printf("\n1 - Somar\n");
    printf("2 - Substrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
}
int obterNumero(void) {
    int numero;
    printf("\nEscolha um número: ");
    scanf("%d", &numero);
    return numero;
}
int obter1(void) {
    int n;
    printf("\nPrimeiro número: ");
    scanf("%d", &n);
    return n;
}
int obter2(void) {
    int nn;
    printf("Segundo número: ");
    scanf("%d", &nn);
    return nn;
}
int somar(int n1, int n2) {
    return n1 + n2;
}
int subtrair(int n1, int n2) {
    return n1 - n2;
}
int multiplicar(int n1, int n2) {
    return n1 * n2;
}
int dividir(int n1, int n2) {
    return n1 / n2;
}
int main(void) {
    
    int opcao;
    int n1, n2;
    exibirMenu();
    opcao = obterNumero();
    
    switch (opcao) {
        case 0:
        printf("Fim do programa.");
        break;
        
        case 1:
        n1 = obter1();
        n2 = obter2();
        printf("Resultado: %d.\n", somar(n1, n2));
        break;
        
        case 2:
        n1 = obter1();
        n2 = obter2();
        printf("Resultado: %d.\n", subtrair(n1, n2));
        break;
        
        case 3:
        n1 = obter1();
        n2 = obter2();
        printf("Resultado: %d.\n", multiplicar(n1, n2));
        break;
        
        case 4:
        n1 = obter1();
        n2 = obter2();
        printf("Resultado: %d.\n", dividir(n1, n2));
        break;
}
    
    
    return 0;
}