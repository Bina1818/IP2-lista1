#include <stdio.h>
#define tam 20

// Função auxiliar para imprimir vetor de forma semelhante ao exemplo da lista
void imprimirVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("vet[%d] = %d\n", i, vetor[i]);
    }
}


int main(){
    int vetor[tam];
    int valor;

    printf("Defina o valor: ");
    scanf("%d", &valor);

    // laço for de duas variáveis, i é indice enquanto v seria o valor
    for (int i = 0, v = 1; i < tam; i++, v++){

        // se v for igual ou maior ao valor, é redefinida para 1
        if (v >= valor){
            v = 1;
        }
    
        vetor[i] = v;
    }

    imprimirVetor(vetor, tam);

}