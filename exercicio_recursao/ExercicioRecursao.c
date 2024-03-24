#include <stdio.h>

double calcularFatorial(int intN_Fatorial){
    double calculo;
    printf("Chamada recursiva %d\n", intN_Fatorial);
    if(intN_Fatorial == 1){
        return 1;
    }else{
        calculo = intN_Fatorial * calcularFatorial(intN_Fatorial - 1);
        printf("Valor retornado %.2f\n", calculo);
        return calculo;
    }
}

int main(int argc, char const *argv[])
{
    int intN_Fatorial;
    double doubleResultadoFatorial;
    printf("Digite o número que deseje calcular o fatorial: ");
    scanf("%d", &intN_Fatorial);
    doubleResultadoFatorial = calcularFatorial(intN_Fatorial);
    printf("Fatorial de %d = %.1f", intN_Fatorial, doubleResultadoFatorial);
    return 0;
}
