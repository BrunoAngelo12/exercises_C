/******************************************************************************

                            Online C Debugger.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Debug" button to debug program.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int vetor[5] = {5,4,3,2,1};
    printf("Lista desordenada\n");
    for(int i = 0; i < 5; i++){
        printf("%d\n", vetor[i]);
    }
    
    
    for(int i = 0; i < 4; i++){
        int menorPosicao = i;
        int variavelAuxiliar = vetor[i];
        bool houveTroca = false;
        
        for(int j = i +1; j < 5; j++){
            if(vetor[j] < variavelAuxiliar){
                menorPosicao = j;//variável para armazenar a nova menor posição
                variavelAuxiliar = vetor[j];//variável para armazenar o novo menor valor
                houveTroca = true;//indicar que vai acontecer movimentação
            }
            if(houveTroca){
                vetor[menorPosicao] = vetor[i];//aqui ele vai pegar a posição nova do novo menor valor,
                // e colocar o antigo menor valor que estava na menor posição
                vetor[i] = variavelAuxiliar;//e agora a menor posição recebe o novo menor valor encontrado
            }
        }
    }
    printf("Lista ordenada\n");
    for(int i = 0; i < 5; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}
