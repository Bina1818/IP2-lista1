#include <stdio.h>
#define true 1
#define false 0

int somarLinhas(int linhas, int colunas, int matriz[linhas][colunas]){
    int somas[linhas];
    int linha = 0;

    // bloco de código que pega cada linha e soma, depois armazena a soma no vetor somas
    while (linha < linhas){
        int soma = 0;
        for (int i = 0; i < colunas; i++){
            //printf("%d ", matriz[linha][i]);
            soma = soma + matriz[linha][i];
        }
        printf("soma da linha = %d\n", soma);
        somas[linha] = soma;
        linha++;
        printf("\n");
    }

    for (int i = 0; i < linhas; i++){
        if (somas[i] != somas[0]){
            return false;
        }
    }
    return somas[0];
}

int somarColunas(int linhas, int colunas, int matriz[linhas][colunas]){
    int somas[colunas];
    int coluna = 0;

    while (coluna < colunas){
        int soma = 0;
        for (int i = 0; i < linhas; i++){
            soma = soma + matriz[i][coluna];
        }        
        printf("soma da coluna = %d\n", soma);
        somas[coluna] = soma;
        coluna++;
        printf("\n");
    }

    for (int i = 0; i < colunas; i++){
        if (somas[i] != somas[0]){
            return false;
        }
    }
    return somas[0];
}

int somarDiagonalPrimaria(int linhas, int colunas, int matriz[linhas][colunas]){
    int soma = 0;
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            if (i == j){
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}

int somarDiagonalSecundaria(int linhas, int colunas, int matriz[linhas][colunas]){
    int soma = 0;
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            if (i + j == linhas - 1){
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}
int main(){
    int tamanho;

    printf("quantidade o tamanho : ");
    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho];

    // preenchimento da matriz
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            printf("linha = %d, coluna = %d\n", i, j);
            printf("defina o elemento: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    // imprime a matriz 
    /* for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }  */

    // soma das linhas
    int somaLinha = somarLinhas(tamanho, tamanho, matriz);
    int somaColuna = somarColunas(tamanho, tamanho, matriz);
    int somaDiagonalPrincipal = somarDiagonalPrincipal(tamanho, tamanho, matriz);
    int somaDiagonalsecundaria = somarDiagonalSecundaria(tamanho, tamanho, matriz);

    if (somaLinha == somaColuna && somaDiagonalPrincipal == somaDiagonalsecundaria){
        printf("eh quadrado magico\n");
    } else {
        printf("nao eh quadrado magico\n");
    }

}