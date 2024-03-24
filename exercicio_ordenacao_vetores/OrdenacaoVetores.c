#include <stdio.h>

int main()
{
    int vetor[3] = {3,2,1};
    
    printf("Vetor antes da ordenação por bolhas\n");
    for(int i = 0; i <3; i++){
        printf("%d\n", vetor[i]);
    }
    printf("------------------------------------\n");
    int tamanhoDoVetor = sizeof(vetor) / sizeof(vetor[0]);
    printf("Tamanho do vetor = %d\n", tamanhoDoVetor);
    printf("------------------------------------\n");
    
    for(int i = 0; i < tamanhoDoVetor; i++){
        for(int j = i+1;j < tamanhoDoVetor; j++){//compara um vetor a frente
            if(vetor[j] < vetor[i]){//se o vetor a frente for menor que o anterior, é efetuada a troca
                int aux = vetor[i];
                vetor[i] = vetor [j];
                vetor [j] = aux;
            }
        }
    }
    printf("Vetor depois da ordenacao por bolhas\n");
    for(int i = 0; i <3; i++){
        printf("%d\n", vetor[i]);
    }
    printf("------------------------------------\n");
    
    return 0;
}