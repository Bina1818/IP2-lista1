#include <stdio.h>
#define tam 3

// falta mexer no calcula da normalização
void preencherMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("linha = %d, coluna = %d \n", i, j);

            printf("elemento: ");
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int maiorMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    int maior = matriz[0][0];

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

int menorMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    int menor = matriz[0][0];

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            if (matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
    }
    return menor;
}

void normalizarMatriz(int linhas, int colunas, int matriz[linhas][colunas], int matrizNormalizada[linhas][colunas]){
    int maior = maiorMatriz(linhas, colunas, matriz);
    int menor = menorMatriz(linhas, colunas, matriz);

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            int elementoNormalizado = (255 / (maior - menor)) * (matriz[i][j] - menor);
            matrizNormalizada[i][j] = elementoNormalizado;
        }
    }
}

int main(){
    int matriz[tam][tam];
    int matrizNormalizada[tam][tam];
    printf("matriz de tamanho %d\n", tam);

    preencherMatriz(tam, tam, matriz);

    printf("matriz padrao\n");
    imprimirMatriz(tam, tam, matriz);

    normalizarMatriz(tam, tam, matriz, matrizNormalizada);
    printf("matriz normalizada\n");
    imprimirMatriz(tam, tam, matrizNormalizada);




}