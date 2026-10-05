#include <stdio.h>
#define true 1
#define false 0
// falta testar
void preencherMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("linha = %d, coluna = %d\n", i, j);
            printf("elemento: ");
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int linhas, int colunas,  int matriz[linhas][colunas]){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void criarTransposta(int linhas, int colunas, int matriz[linhas][colunas], int transposta[linhas][colunas]){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            transposta[j][i] = matriz[i][j];
        }
    }
}

void multiplicarMatrizes(int linhas, int colunas, int matrizA[linhas][colunas], int matrizB[linhas][colunas], int resultado[linhas][colunas]){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
        resultado[i][j] = 0;
            for (int k = 0; k < linhas; k++){
            resultado[i][j] = resultado[i][j] + (matrizA[i][k] * matrizB[k][j]);
                
            }
        }
    }
}

int ehMatrizIdentidade(int linhas,int colunas,  int matriz[linhas][colunas]){
    int flag;

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            // diagonal principaç
            if (i == j){
                if (matriz[i][i] == 1){
                    flag = true;
                } else {
                    flag = false;
                    return flag;
                }
            } 

            // restante da matriz
            else {
                if (matriz[i][j] == 0){
                    flag = true;
                } else {
                    flag = false;
                    return flag;
                }
            }
        }
    }
    return flag;
}



int main(){
    int tamanho;
    
    printf("defina o tamanho da matriz: ");
    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho];
    int transposta[tamanho][tamanho];
    int resultado[tamanho][tamanho];


    preencherMatriz(tamanho, tamanho, matriz);
    criarTransposta(tamanho, tamanho, matriz, transposta);

    printf("matriz normal\n");
    imprimirMatriz(tamanho, tamanho, matriz);

    printf("matriz transposta\n");
    imprimirMatriz(tamanho, tamanho, transposta);

    multiplicarMatrizes(tamanho, tamanho, matriz, transposta, resultado);

    int ehIdentidade = ehMatrizIdentidade(tamanho, tamanho, resultado);

    imprimirMatriz(tamanho, tamanho, resultado);

    if (ehIdentidade == 1){
        printf("eh matriz identidade\n");
    } else {
        printf("nao eh matriz identidade\n");
    }


 

}