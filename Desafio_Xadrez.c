#include <stdio.h>

// Torre movendo para a direita
void moverTorre(int casas) {
    if (casas == 0) return;            
    printf("Direita\n");
    moverTorre(casas - 1);             
}

// Rainha movendo para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo movendo na diagonal
void moverBispoRec(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispoRec(casas - 1);
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    int cavaloCima = 2;
    int cavaloDireita = 1;

    int i, j;

    // Movimentos
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRec(casasBispo);
    printf("\n");

    printf("Movimento do Bispo (Loops Aninhados):\n");
    for (i = 0; i < casasBispo; i++) {        
        for (j = 0; j < 1; j++) {             
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");


    printf("Movimento do Cavalo:\n");

    int movCima = 0;
    int movDir = 0;

   // loop
    for (i = 0; i < 3; i++) {          

       
        if (movCima == cavaloCima && movDir == cavaloDireita) {
            break;
        }

       
        for (j = 0; j < 2; j++) {

            
            if (movCima < cavaloCima) {
                printf("Cima\n");
                movCima++;
                continue;              
            }

            
            if (movDir < cavaloDireita) {
                printf("Direita\n");
                movDir++;
                break;                 
            }
        }
    }

    printf("\n");
    return 0;
}
