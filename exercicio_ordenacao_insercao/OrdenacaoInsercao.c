/******************************************************************************

                            Online C Debugger.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Debug" button to debug program.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vetor[5] = {1,4,2,3,5};
    
    for(int i = 1; i < 5; i++){
        int chave = vetor [i];
        int j;
        for(j = i - 1; j >= 0 && vetor[j] > chave; j --){//>=0 por que ele vai diminuindo -1 a cada iteração
            vetor [j + 1] = vetor[j];//deslocamento de elementos
        }
        vetor[j +1] = chave;
    }
    printf("Vetor ordenado\n");
    for (int i = 0; i < 5; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}
