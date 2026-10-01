#include <stdio.h>

// falta verificação para modal não existente

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

int contarElemento(int vetor[], int tamanho, int elemento){
    int contador = 0;
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] == elemento){
            contador++;
        }
    }
    return contador;
}

int main(){
    int tamanho;
    int maior = 0;
    int modal = 0;


    printf("defina o tamanho ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    preencherVetor(vetor, tamanho);

    for (int i = 0; i < tamanho; i++){
        int ocorrencia = contarElemento(vetor, tamanho, vetor[i]);

        if (ocorrencia > maior){
            maior = ocorrencia;
            modal = vetor[i];
        }
    }



    imprimirVetor(vetor, tamanho);
    printf("%d\n", modal);
}