#include <stdio.h>

void preencherVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("indice = %d\n", i);
        printf("defina o valor: ");
        scanf("%d", &vetor[i]);
    }
}

void imprimirVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void picosVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){

        // pega o primeiro elemento
        if (i == 0){
            if (vetor[i] > vetor[i+1]){
                printf("%d ", i);
            }
        }
        // pega o ultimo elemento
        else if (i + 1 == tamanho){
            if (vetor[i] > vetor[i-1]){
                printf("%d ", i);
            }
        }

        else {
            if (vetor[i] > vetor[i+1] && vetor[i] > vetor[i-1]){
                printf("%d ", i);
            }
        }

    }
}

int main(){
    int tamanho;

    printf("defina o tamanho: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    preencherVetor(vetor, tamanho);
    picosVetor(vetor, tamanho);

    

}