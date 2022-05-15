#include <stdio.h>

int main () {
    float VariavelA = 0;
    float VariavelB = 0;
    char Operadores[4] = {'/','+','-','*'};
    char Operador;
    int Auxiliar = 0;

    printf ("Digite o numero A: ");
    scanf ("%f", &VariavelA);
    printf ("Digite o numero B: ");
    scanf ("%f", &VariavelB);

    printf ("Digite o operador: ");

    while (1) {
        scanf ("%s", &Operador);
        for (int i = 0; i < 4 ; i++) {
            if (Operador == Operadores[i]) {
                printf ("Operador valido! ");
                Auxiliar++;
            }
        }
        if (Auxiliar == 1) {
            break;
        }
        printf ("Deu errado!\n Digite um novo operador: ");
    }

    switch (Operador) {
        case '/':
            printf ("Esse e o resultado do calculo: %.2f\n", VariavelA / VariavelB);
            break;
        case '+':
            printf ("Esse e o resultado do calculo: %.2f\n", VariavelA + VariavelB);
            break;
        case '-':
            printf ("Esse e o resultado do calculo: %.2f\n", VariavelA - VariavelB);
            break;
        case '*':
            printf ("Esse e o resultado do calculo: %.2f\n", VariavelA * VariavelB);
            break;
    }

    printf ("Fim do programa! \n");
    return 0;
}